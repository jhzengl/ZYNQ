#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[20] = { 0 };
    char arr2[2] = "helloworld";

    strcpy(arr1,arr2);

    printf("%s\n",arr1);

    return 0;

}