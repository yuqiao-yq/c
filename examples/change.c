#include <stdio.h>

int main() {
    int price = 0;
    printf("Enter the price: (元)");
    scanf("%d", &price);

    int change = 100 - price;
    printf("Change: %d\n", change);
    return 0;
}