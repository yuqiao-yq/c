#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter two numbers: ");
    // 输入2个空格隔开的整数，赋值给a和b
    scanf("%d %d", &a, &b); // 出现在scanf中的东西，是需要输入的东西，例如如果是 scanf("%d,%d", &a, &b); 那么输入的时候需要输入a,b之间用逗号隔开
    c = a + b;
    d = a - b;
    printf("Sum = %d\n", c);
    printf("Difference = %d\n", d);
    return 0;
}

// scanf("%d %d", &a, &b);