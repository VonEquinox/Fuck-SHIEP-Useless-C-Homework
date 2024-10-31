/*c5-3-1.c*/
#include <stdio.h>

int main()
{
    FILE *fp, *fp_out;
    int id, math, english, c_language;
    float avg;

    fp = fopen("score.txt", "r");
    fp_out = fopen("score_avg.txt", "w");
    fprintf(fp_out, "学号\t高数\t英语\tC语言\t平均分\n");
    while (fscanf(fp, "%d %d %d %d", &id, &math, &english, &c_language) != EOF) {
        avg = (math + english + c_language) / 3.0;
        fprintf(fp_out, "%d\t%d\t%d\t%d\t%.2f\n", id, math, english, c_language, avg);
        printf("%d\t%d\t%d\t%d\t%.2f\n", id, math, english, c_language, avg);
    }
    fclose(fp);
    fclose(fp_out);

    return 0;
}