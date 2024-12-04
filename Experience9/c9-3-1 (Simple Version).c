#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    FILE* inputfp = fopen ("score.txt", "r");
    FILE* outputfp = fopen ("score_avg.txt", "w");
    if (inputfp == NULL || outputfp == NULL)
    {
        printf ("Error opening files!\n");
        return 1;
    }
    int id[80], math[80], eng[80], c_lang[80];
    char name[80][80];
    float avg[80];
    int count = 0;
    char line[100];
    while (fgets (line, sizeof (line), inputfp))
    {
        id[count] = atoi (strtok (line, " "));
        strcpy (name[count], strtok (NULL, " "));
        math[count] = atoi (strtok (NULL, " "));
        eng[count] = atoi (strtok (NULL, " "));
        c_lang[count] = atoi (strtok (NULL, " "));
        avg[count] = (math[count] + eng[count] + c_lang[count]) / 3.0;
        count++;
    }
    for (int i = 0; i < count - 1; i++) for (int j = 0; j < count - i - 1; j++) if (avg[j] < avg[j + 1])
    {
        int temp_id = id[j];
        id[j] = id[j + 1];
        id[j + 1] = temp_id;
        char temp_name[80];
        strcpy (temp_name, name[j]);
        strcpy (name[j], name[j + 1]);
        strcpy (name[j + 1], temp_name);
        int temp_math = math[j];
        math[j] = math[j + 1];
        math[j + 1] = temp_math;
        int temp_eng = eng[j];
        eng[j] = eng[j + 1];
        eng[j + 1] = temp_eng;
        int temp_c_lang = c_lang[j];
        c_lang[j] = c_lang[j + 1];
        c_lang[j + 1] = temp_c_lang;
        float temp_avg = avg[j];
        avg[j] = avg[j + 1];
        avg[j + 1] = temp_avg;
    }
    printf ("学号\t姓名\t高数\t英语\tC语言\t平均分\n");
    fprintf (outputfp, "学号\t姓名\t高数\t英语\tC语言\t平均分\n");
    for (int i = 0; i < count; i++)
    {
        printf ("%d\t%s\t%d\t%d\t%d\t%.2f\n", id[i], name[i], math[i], eng[i], c_lang[i], avg[i]);
        fprintf (outputfp, "%d\t%s\t%d\t%d\t%d\t%.2f\n", id[i], name[i], math[i], eng[i], c_lang[i], avg[i]);
    }
    fclose (inputfp);
    fclose (outputfp);
    return 0;
}
