#include <stdio.h>
#include <stdlib.h>

#define LEFT 1
#define RIGHT 100

// int main()
// {
//     int i;
//     int sum = 0;

//     i = LEFT; // 用i来判断是否进行循环，用i来进行初始

//     while(i <= RIGHT) // i的跳出条件
//     {
//         sum += i;
//         i ++;         
//     }     

//     printf("sum = %d\n",sum);

//     exit(0);
// }

// int main()
// {
//     int i = 0;
//     int sum;

//     i = LEFT;

//     do{
//         sum += i;
//         i++;
//     }while(i <= RIGHT);

//     printf("sum = %d\n",sum);

//     exit(0);
// }

int main()
{
    int i;
    int start,end = 10;
    int sum = 0;

    printf("Please enter:");
    scanf("%d",&start);

    while(start <= end)
    {
        sum += start;
        start++;
    }

    printf("start = %d\n",start);
    printf("sum = %d\n",sum);


    exit(0);
}