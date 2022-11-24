#include <stdio.h>
#include <stdlib.h>


static void test6(void){
    int i,j,k;

    for(i = 0; i < 20; i++)
    {
        for(j = 0; j < 100/3; j++)
        {
            for(k = 0; k < 100; k++)
            {
                k = 100 - i - j;
                if(k % 3 == 0 && 5 * i + 3 * j + k / 3 == 100)
                printf("%d %d %d", i, j, k);
            }
        }
    }


}
int main()
{

    test6();


    return 0;
}