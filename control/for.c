#include <stdio.h>
#include <stdlib.h>

#define LEFT 1
#define RIGHT 100

int main()
{
    int i;
    int start,end = 10;
    int sum = 0;


    for(i = LEFT; i <= RIGHT; i++)
    {
        sum += i;
    }

    printf("sum = %d\n",sum);

    exit(0);
}