/*c12-2-9.c*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[20][20];
    int i = 0, j = 0;
    char ch[20];
    printf("input the name:");
    for (i = 0; i < 20; i++)
        gets(name[i]);
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 20 - i - 1; j++) {
            if (strcmp(name[j], name[j + 1]) > 0) {
                strcpy(ch, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], ch);
            }
        }
    }
    printf("排序后：\n");
    for (i = 0; i < 20; i++)
        printf("%s\n", name[i]);
    return 0;
}