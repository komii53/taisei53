#include <stdio.h>

int main(void){
    // メッセージを表示します
    /* Helloを表示しないように変更する
    printf("Hollo Programming in C world!\n");　//Hello
    */
    printf("Good-bye Programming in C World!\n"); //Good-byeを表示
    
    return 0;
}

#include <stdio.h>

int main()
{
    int a,b,result;
    
    a=20;
    b=5;
    
    //足し算
    result=a+b;
    printf("%d-%d=%d\n",a,b,result);
    
    //引き算
    result=a-b;
    printf("%d-%d=%d\n",a,b,result);
    
    //かけ算
    result=a*b;
    printf("%d×%d=%d\n",a,b,result);
    
    //割り算
    result=a/b;
    printf("%d÷%d=%d\n",a,b,result);
    
    return 0;