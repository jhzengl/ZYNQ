#include <stdio.h>
#include <stdlib.h>
/*
    斐波那契数列
    前两个值分别为0、1或者1、1
    从第三个数开始，它的值是前两个数字的和
*/

static void fibonacci(void){

    int i, j, tmp;
    int fib[10] = {1, 1}; // 定义最开始两个数

    for(i = 2; i < sizeof(fib)/sizeof(fib[0]); i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    for(i = 0; i < sizeof(fib)/sizeof(fib[0]); i++)
        printf("%d\n", fib[i]);
    printf("\n");
/*
逆序交换
*/
    i = 0;
    j = sizeof(fib)/sizeof(fib[0]) - 1; // 最后一个元素的下标

    while (i < j)
    {
       tmp = fib[i];
       fib[i] = fib[j];
       fib[j] = tmp;

       i++;
       j--;
    }
    
    for(i = 0; i < sizeof(fib)/sizeof(fib[0]); i++)
        printf("%d\n", fib[i]);
    printf("\n");


    return;
}


int main(){

    fibonacci();

    return 0;

}