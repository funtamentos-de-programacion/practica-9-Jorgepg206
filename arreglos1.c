#include <stdio.h>


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    char str[] = " hola mundo";
    char str2[5];
    str2[0] = 'A';
    str2[1] = 'd';
    str2[2] = 'i';
    str2[3] = 'o';
    str2[4] = 's';
    str2[5] = '\0';

    printf("[ ");
    for(int i=0; i<5; i++)
        printf("%d, ", arr[i]);
    printf("]\n");

    printf("[ ");
    for(int i=1; i<11; i++)
        printf("%c, ", str[i]);
    printf("]\n");


    printf("[");
    for(int i=0; i<5; i++)
        printf("%c, ", str2[i]);
    printf("]\n");

    return 0;
}