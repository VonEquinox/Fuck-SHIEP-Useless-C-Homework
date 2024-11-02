
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    while (true) {
        for (int i = 0; i < 10; i++) {
            int a = (int)((double)rand() / RAND_MAX * 100);
            int b = (int)((double)rand() / RAND_MAX * 100);
            int flag = 0; // 0 + 1 - 2 * 3/
            double symbol = (double)rand() / RAND_MAX;
            if (symbol > 0.75)
                flag = 3;
            else if (symbol > 0.5)
                flag = 2;
            else if (symbol > 0.25)
                flag = 1;
            else if (symbol > 0)
                flag = 0;

            int ans = 0;
            if (flag != 3) {
                ans = 0;
                if (flag == 0) {
                    printf("%d+%d=", a, b);
                    ans = a + b;
                } else if (flag == 1) {
                    // 确保a>b
                    if (b > a) {
                        int t = a;
                        a = b;
                        b = t;
                    }
                    printf("%d-%d=", a, b);
                    ans = a - b;
                } else {
                    printf("%d*%d=", a, b);
                    ans = a * b;
                }
            } else {
                // 除法
                int c = -1;
                // 从1-100里面找一个可以被a整除的数字,找不到重新生成a再找,rand() > RAND_MAX / 4增加随机性
                do {
                    a = (int)((double)rand() / RAND_MAX * 100);
                    if (a != 0) {
                        for (int i = 100; i > 0; i--) {
                            if (i % a == 0 && rand() > RAND_MAX / 4) {
                                c = i;
                                break;
                            }
                        }
                    }
                } while (c == -1);
                printf("%d/%d=", c, a);
                ans = c / a;
            }

            int temp = 0;
            scanf("%d", &temp);
            if (temp == ans)
                printf("对\n");
            else
                printf("错,答案:%d\n", ans);
        }
        printf("需要进行下一轮训练吗?Y/N\n");
        char temp = 0;
        getchar();
        scanf("%c", &temp);
        if (temp == 'N' || temp == 'n')
            break;
    }

    return 0;
}
