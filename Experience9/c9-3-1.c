#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_LENGTH(Array) (sizeof(Array)/sizeof(Array[0]))

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

int main()
{
    StudentScore StudentData[5] = {};
    FILE *rfp = fopen("score.txt", "r");
    //读取
    int Index = 0;
    while (fscanf(rfp,
    "%d %s %d %d %d",
    &StudentData[Index].Number,
    StudentData[Index].Name,
    &StudentData[Index].MathScore,
    &StudentData[Index].EnglishScore,
    &StudentData[Index].CScore) != EOF)
        Index++;
    fclose(rfp);
    //求平均值
    StudentAverageScore SAVData[5] = {};
    for (int i = 0; i < ARRAY_LENGTH(StudentData); i++) {
        SAVData[i].Number = StudentData[i].Number;
        //把一个字符串赋值为另一个需要用strcpy
        strcpy(SAVData[i].Name, StudentData[i].Name);
        SAVData[i].AverageScore = ((double)StudentData[i].MathScore + (double)StudentData[i].EnglishScore + (double)StudentData[i].CScore) / 3;
        SAVData[i].MathScore = StudentData[i].MathScore;
        SAVData[i].EnglishScore = StudentData[i].EnglishScore;
        SAVData[i].CScore = StudentData[i].CScore;
    }
    //排序
    for (int i = 0; i < ARRAY_LENGTH(SAVData); i++) {
        for (int j = 0; j < ARRAY_LENGTH(SAVData) - 1; j++) {
            if (SAVData[j].AverageScore < SAVData[j+1].AverageScore){
                StudentAverageScore Temp = SAVData[j];
                SAVData[j] = SAVData[j+1];
                SAVData[j+1] = Temp;
            }
        }
    }
    //输出
    FILE* wfp = fopen("score_avg.txt", "w");
    fprintf(wfp, "学号\t姓名\t高数\t英语\tC语言\t平均分\n");
    for (int i = 0; i < ARRAY_LENGTH(SAVData); i++)
        fprintf(wfp, "%d\t%s\t%d\t%d\t%d\t%.2lf\n", SAVData[i].Number, SAVData[i].Name, SAVData[i].MathScore, SAVData[i].EnglishScore, SAVData[i].CScore,SAVData[i].AverageScore);
    fclose(wfp);
    return 0;
}
