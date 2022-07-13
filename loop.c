#include <stdio.h>
int main (){
    int n;
    printf("\n Enter any no for its multiplication table: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n*i);
    }
    return 0;
}