#include <stdio.h>
#include <stdlib.h>

#define N   10
static void sort1(void){
    
    int i, j, tmp;
    int a[N] = {12, 8, 45, 30, 98, 67, 2, 7, 68, 11};

    for(i = 0; i < N; i++){
        printf("%d ",a[i]);
    }
    printf("\n");


    for(i = 0; i < (N - 1); i++){
        for(j = 0; j < N-1-i; j++){
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    for(i = 0; i < N; i++)
        printf("%d ",a[i]);
}

int main(){

    sort1();
}