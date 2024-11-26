#include <stdio.h>

int main() {
    printf("请输入分钟数：");
    // int minutes;
    // scanf("%d", &minutes);

    // printf("您输入了%d分钟，相当于%lf小时\n", minutes, minutes / 60.0);

    double minutes;
    scanf("%lf", &minutes);

    printf("您输入了%.2lf分钟，相当于%.2lf小时\n", minutes, minutes / 60);
    return 0;
}