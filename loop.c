// multiplication table
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




// calculate the sum of all numbers between 5 to 5o,including 5 & 50
#include <stdio.h>
int main(){
    int i,sum = 0;
    for ( i = 5; i <= 50; i++)
    {
        sum = sum + i; 
    }
    printf("sum of the numbers = %d", sum);
    return 0;
}