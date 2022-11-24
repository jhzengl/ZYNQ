#include <stdio.h>
#include <stdlib.h>

// 函数声明
int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(void){
    int a, b, c;

    a = 23;
    b = 122;

    // 函数调用，调用已经写好的函数模块，来完成既定功能
    c = add(a, b);
    // c = sub(a, b);
    // c = multiply(a, b);
    // c = divide(a, b);

    printf("c = %d\n", c);

    return 0;
}

// 函数的定义， 又叫函数的实现
int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}