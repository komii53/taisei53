#include<stdio.h>

int main() {
    int x, y,result;
    printf("xの値を入れてください:");
    scanf_s("%d", &x);
    printf("yの値を入れてください:");
    scanf_s("%d", &y);

    result = x + y;
    printf("x+y=%d\n",result);

    result = x - y;
    printf("x-y=%d\n", result);

    result = x * y;
    printf("x×y=%d\n", result);

    result = x / y;
    printf("x÷y=%d\n", result);

    return 0;
}