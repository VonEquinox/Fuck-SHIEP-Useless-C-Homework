#include <stdio.h>
int main()
{
    char concept[12][20] = {"富强", "民主", "文明", "和谐", "自由", "平等", "公正", "法治", "爱国", "敬业", "诚信", "友善"};
    printf("*****弘扬社会主义核心价值观*****\n");
    for (int i = 0; i < 12; i++) {
        printf("   %s", concept[i]);
        if ((i + 1) % 4 == 0) printf("\n");
    }
    return 0;
}