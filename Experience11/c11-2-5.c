/*c11-2-5.c*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_LENGTH(Array) (sizeof(Array) / sizeof(Array[0]))

struct StudentScore {
    int Number;
    char Name[20];
    int MathScore;
    int EnglishScore;
    int CScore;
};

struct StudentAverageScore {
    int Number;
    char Name[20];
    int MathScore;
    int EnglishScore;
    int CScore;
    double AverageScore;
};

void read(const char *Path, struct StudentScore StudentData[])
{
    FILE *rfp = fopen(Path, "r");
    // 读取
    int Index = 0;
    while (fscanf(rfp, "%d %s %d %d %d", &StudentData[Index].Number, StudentData[Index].Name, &StudentData[Index].MathScore, &StudentData[Index].EnglishScore, &StudentData[Index].CScore) != EOF)
        Index++;
    fclose(rfp);
}

void ave(struct StudentScore StudentData[], struct StudentAverageScore SAVData[], int Length)
{
    for (int i = 0; i < Length; i++) {
        SAVData[i].Number = StudentData[i].Number;
        // 把一个字符串赋值为另一个需要用strcpy
        strcpy(SAVData[i].Name, StudentData[i].Name);
        SAVData[i].AverageScore = ((double)StudentData[i].MathScore + (double)StudentData[i].EnglishScore + (double)StudentData[i].CScore) /3;
        SAVData[i].MathScore = StudentData[i].MathScore;
        SAVData[i].EnglishScore = StudentData[i].EnglishScore;
        SAVData[i].CScore = StudentData[i].CScore;
    }
}

void sort(struct StudentAverageScore SAVData[], int Length)
{
    for (int i = 0; i < Length; i++) {
        for (int j = 0; j < Length - 1; j++) {
            if (SAVData[j].AverageScore < SAVData[j + 1].AverageScore) {
                struct StudentAverageScore Temp = SAVData[j];
                SAVData[j] = SAVData[j + 1];
                SAVData[j + 1] = Temp;
            }
        }
    }
}

void output(const char *Path, struct StudentAverageScore SAVData[], int Length)
{
    FILE *wfp = fopen("score_avg.txt", "w");
    fprintf(wfp, "学号\t姓名\t高数\t英语\tC语言\t平均分\n");
    for (int i = 0; i < Length; i++)
        fprintf(wfp, "%d\t%s\t%d\t%d\t%d\t%.2lf\n", SAVData[i].Number, SAVData[i].Name, SAVData[i].MathScore,
                SAVData[i].EnglishScore, SAVData[i].CScore, SAVData[i].AverageScore);
    fclose(wfp);
}

int main()
{
    struct StudentScore StudentData[5] = {};
    read("score.txt", StudentData);

    // 求平均值
    struct StudentAverageScore SAVData[5] = {};
    ave(StudentData, SAVData, ARRAY_LENGTH(SAVData));
    // 排序
    sort(SAVData, ARRAY_LENGTH(SAVData));
    // 输出
    output("score_avg.txt", SAVData, ARRAY_LENGTH(SAVData));

    return 0;
}