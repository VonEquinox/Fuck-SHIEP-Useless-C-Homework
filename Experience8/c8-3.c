#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float data[10][6] = {0};
    FILE *fp = fopen("score.txt", "a+");
    int i = 0;
    for (; i < 10; i++) {
        int ret = fscanf(fp, "%f %f %f %f %f %f", &data[i][0], &data[i][1], &data[i][2], &data[i][3], &data[i][4],&data[i][5]);
        if (ret == EOF)
            break;
    }
    float procssdata[10][4] = {0};
    for (int j = 0; j < i; j++) {
        procssdata[j][0] = data[j][0];
        float max = -1;
        float min = 114514;
        for (int k = 1; k < 6; k++) {
            if (data[j][k] > max)
                max = data[j][k];
            else if (data[j][k] < min)
                min = data[j][k];
        }
        int maxflag = 0;
        int minflag = 0;
        int ii = 1;
        for (int k = 1; k < 6; k++) {
            if (data[j][k] != max && data[j][k] != min) {
                procssdata[j][ii] = data[j][k];
                ii++;
            } else if (data[j][k] == max && maxflag) {
                procssdata[j][ii] = data[j][k];
                ii++;
            } else if (data[j][k] == min && minflag) {
                procssdata[j][ii] = data[j][k];
                ii++;
            } else if (data[j][k] == max) {
                maxflag = 1;
            } else if (data[j][k] == min) {
                minflag = 1;
            }
        }
    }
    float list[10][2] = {0};
    for (int j = 0; j < i; j++) {
        list[j][0] = procssdata[j][0];
        list[j][1] = (procssdata[j][1] + procssdata[j][2] + procssdata[j][3]) / 3;
    }
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < i - 1; k++) {
            if (list[k][1] < list[k + 1][1]) {
                float temp[2] = {0};
                temp[0] = list[k + 1][0];
                temp[1] = list[k + 1][1];
                list[k + 1][0] = list[k][0];
                list[k + 1][1] = list[k][1];
                list[k][0] = temp[0];
                list[k][1] = temp[1];
            }
        }
    }
    fprintf(fp, "List\n");
    for (int j = 0; j < i; j++)
        fprintf(fp,"第%d名:%d\t分数:%.2f\n", j + 1, (int)list[j][0], list[j][1]);
    fclose(fp);
    return 0;
}