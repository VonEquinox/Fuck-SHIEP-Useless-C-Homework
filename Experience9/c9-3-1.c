/*c9-3-1.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct students 
{
    int id;
    char name[80];
    int math;
    int eng;
    int C;
    float avg;
};

int compare(const void* elem1, const void* elem2)
{
    return ((struct students*)elem2)->avg - ((struct students*)elem1)->avg;
}

int main()
{
    FILE* inputfp, * outputfp;
    struct students num[80];//声明结构体变量
    int count = 0;
    int i;
    char line[100];//储存一行字符的数组
    inputfp = fopen("score.txt", "r");
    outputfp = fopen("score_avg.txt", "w");
    if (inputfp == NULL || outputfp == NULL)
    {
        printf("error!!!!!");
        return 1;
    }
    while (fgets(line, sizeof(line), inputfp))//(储存位置，储存数据大小，输入方式（stdin为标准输入，即键盘输入))
    {
        
        num[count].id = atoi(strtok(line, " "));//学号字符串转化为整数，以空格为分隔符拆分字符串，line是指针指向要分割的字符串。
        strcpy(num[count].name , strtok(NULL, " "));//将名字拷贝至name结构体。strock发现分隔符后会将分隔符变为\0字符，返回NULL空指针，故第一次调用时要指明位置，之后调用使用空指针
        num[count].math = atoi(strtok(NULL, " "));
        num[count].eng = atoi(strtok(NULL," "));
        num[count].C = atoi(strtok(NULL," "));
        num[count].avg = (num[count].math + num[count].eng + num[count].C) / 3.0;
        count++;
    }
    qsort(num, count, sizeof(struct students), compare);//快速排序函数    
    printf( "学号\t姓名\t高数\t英语\tC语言\t平均分\n");
    fprintf(outputfp, "学号\t姓名\t高数\t英语\tC语言\t平均分\n");
    for (i = 0; i < count; i++)
    {
        fprintf(outputfp,"%d\t%s\t%d\t%d\t%d\t% .2f\n", num[i].id, num[i].name, num[i].math, num[i].eng, num[i].C, num[i].avg);
        printf("%d\t%s\t%d\t%d\t%d\t% .2f\n", num[i].id, num[i].name, num[i].math, num[i].eng, num[i].C, num[i].avg);
    }
    fclose(inputfp);
    fclose(outputfp);
    inputfp = NULL;
    outputfp = NULL;
    return 0;
}