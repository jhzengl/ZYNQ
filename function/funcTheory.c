#include <stdio.h>

// 说明
// 1.函数名字test
// 2.函数没有返回，void
// 3.完成功能：传入一个数+1
int test(int n){
    int n2 = n + 1;
    printf("n2 = %d\n, n2");
}

int main(){

    int num = 6;
    test(num);
    getchar();
}