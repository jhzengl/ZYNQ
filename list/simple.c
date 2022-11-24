#include <stdio.h>
#include <stdlib.h>

#define M 3

int main()
{
    
    int i;
    static int arr[M] ;// 全部初始化

    printf("%d\n",sizeof(arr));
    printf("arr = %p\n",arr);

    for(i = 0; i < M; i++)
        scanf("%d",&arr[i]);
        
    for(i = 0; i < M; i++)
        printf("%p --> %d\n",&arr[i],arr[i]);


    exit(0);
}