#include<stdio.h>

int main() {
    int x, y,result;
    printf("x‚Ì’l‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢:");
    scanf_s("%d", &x);
    printf("y‚Ì’l‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢:");
    scanf_s("%d", &y);

    result = x + y;
    printf("x+y=%d\n",result);

    result = x - y;
    printf("x-y=%d\n", result);

    result = x * y;
    printf("x~y=%d\n", result);

    result = x / y;
    printf("x€y=%d\n", result);

    return 0;
}