#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void order();
void query();
void read();

typedef struct {
    int year;        // 年
    int month;       // 月
    int day;         // 日
} Date;

typedef struct {
    char No[9];      // 学号或工号，8位
    char name[20];   // 姓名
    int trav_line_no; // 班车编号
    Date order_date; // 预约日期
} bus_order;

int main() {
    int choice;
    
    do {
        printf("通勤班车预约系统\n");
        printf("1. 预约班车\n");
        printf("2. 查询预约信息\n");
        printf("3. 退出\n");
        printf("请输入选择: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                order();
                break;
            case 2:
                query();
                break;
            case 3:
                printf("退出系统.\n");
                break;
            default:
                printf("无效选择，请重新输入.\n");
        }
    } while (choice != 3);
    
    return 0;
}

void order() {
    bus_order new_order;
    FILE *fp;

    // 获取当前系统时间
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);
    int current_year = current_time->tm_year + 1900;  // 年份从 1900 开始计数
    int current_month = current_time->tm_mon + 1;    // 月份从 0 开始计数
    int current_day = current_time->tm_mday;         // 当前日

    printf("请输入学号/工号: ");
    scanf("%s", new_order.No);
    printf("请输入姓名: ");
    scanf("%s", new_order.name);
    printf("请输入班车编号（1-10）: ");
    scanf("%d", &new_order.trav_line_no);
    printf("请输入预约日期 (年 月 日): ");
    scanf("%d %d %d", &new_order.order_date.year, &new_order.order_date.month, &new_order.order_date.day);

    // 检查预约日期是否不早于当前日期
    if (new_order.order_date.year < current_year || 
        (new_order.order_date.year == current_year && new_order.order_date.month < current_month) || 
        (new_order.order_date.year == current_year && new_order.order_date.month == current_month && new_order.order_date.day < current_day)) {
        printf("错误：预约日期不能早于当前日期（%d-%d-%d）。\n", current_year, current_month, current_day);
        return;  // 退出函数，提示用户重新输入
    }

    // 将预约信息追加到文件
    fp = fopen("order.txt", "a");
    if (fp == NULL) {
        printf("无法打开文件。\n");
        return;
    }
    fprintf(fp, "%s %s %d %d %d %d\n", new_order.No, new_order.name, new_order.trav_line_no,
            new_order.order_date.year, new_order.order_date.month, new_order.order_date.day);
    fclose(fp);
    printf("班车预约成功！\n");
}

void query() {
    bus_order orders[100];
    int count = 0;
    FILE *fp;

    fp = fopen("order.txt", "r");
    if (fp == NULL) {
        printf("无法打开文件。\n");
        return;
    }

    // 读取文件中的所有预约信息
    while (fscanf(fp, "%s %s %d %d %d %d", orders[count].No, orders[count].name, &orders[count].trav_line_no,
                  &orders[count].order_date.year, &orders[count].order_date.month, &orders[count].order_date.day) != EOF) {
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("没有预约信息。\n");
        return;
    }

    // 打印所有预约信息
    printf("预约信息：\n");
    for (int i = 0; i < count; i++) {
        printf("学号/工号: %s, 姓名: %s, 班车编号: %d, 预约日期: %d-%d-%d\n",
               orders[i].No, orders[i].name, orders[i].trav_line_no,
               orders[i].order_date.year, orders[i].order_date.month, orders[i].order_date.day);
    }
}
