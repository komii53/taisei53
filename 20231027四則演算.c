#include<stdio.h>

int main() {
    int x, y,result;
    printf("x�̒l�����Ă�������:");
    scanf_s("%d", &x);
    printf("y�̒l�����Ă�������:");
    scanf_s("%d", &y);

    result = x + y;
    printf("x+y=%d\n",result);

    result = x - y;
    printf("x-y=%d\n", result);

    result = x * y;
    printf("x�~y=%d\n", result);

    result = x / y;
    printf("x��y=%d\n", result);

    return 0;
}