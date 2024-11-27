#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float data[10][6] = {0};
    FILE* fp = fopen ("score.txt", "a+");
    if (!fp)
    {
        perror ("Failed to open file");
        return -1;
    }
    int i = 0;
    for (; i < 10; i++)
    {
        int status = fscanf (fp, "%f %f %f %f %f %f", &data[i][0], &data[i][1], &data[i][2], &data[i][3], &data[i][4], &data[i][5]);
        if (status == EOF) break;
    }
    float processed_data[10][4] = {0};
    for (int j = 0; j < i; j++)
    {
        processed_data[j][0] = data[j][0];
        float max = -1, min = 114514;
        for (int k = 1; k < 6; k++)
        {
            if (data[j][k] > max) max = data[j][k];
            if (data[j][k] < min) min = data[j][k];
        }
        int index = 1, max_flag = 0, min_flag = 0;
        for (int k = 1; k < 6; k++)
        {
            if (data[j][k] != max && data[j][k] != min) processed_data[j][index++] = data[j][k];
            else if (data[j][k] == max && !max_flag) processed_data[j][index++] = data[j][k], max_flag = 1;
            else if (data[j][k] == min && !min_flag) processed_data[j][index++] = data[j][k], min_flag = 1;
        }
    }
    float list[10][2] = {0};
    for (int j = 0; j < i; j++)
    {
        list[j][0] = processed_data[j][0];
        list[j][1] = (processed_data[j][1] + processed_data[j][2] + processed_data[j][3]) / 3;
    }
    for (int j = 0; j < i; j++) for (int k = 0; k < i - 1; k++) if (list[k][1] < list[k + 1][1])
    {
        float temp0 = list[k + 1][0], temp1 = list[k + 1][1];
        list[k + 1][0] = list[k][0];
        list[k + 1][1] = list[k][1];
        list[k][0] = temp0;
        list[k][1] = temp1;
    }
    fprintf (fp, "\n\n");
    for (int j = 0; j < i; j++) fprintf (fp, "第%d名: %d\t分数: %.2f\n", j + 1, (int) list[j][0], list[j][1]);
    fclose (fp);
    return 0;
}
