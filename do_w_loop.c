// wrtite a program to determine a number is prime or not
/*#include <stdio.h>
int main(){
    int num,i;
    printf("Enter a number: \n");
    scanf("%d", &num);
    i = 2;
    while (i <= num-1)
    {
        if (num % i == 0)
        {
            printf("It is not a prime number");
            break;
        }
        i++;
    }
    if (i == num)
    {
        printf("It is a prime number");
    }
}*/



// determine the square of an input number & everytime ask user if he want to enter another number?
#include <stdio.h>
int main(){
    int i,num;
    char another;
    
    do
    {
        printf("Enter a number : ");
        scanf("%d", &num);
        printf("The square of %d is = %d\n", num, num*num);
        printf("Want to enter another number? y/n? \n");
        fflush(stdin);
        scanf("%c",&another);
    } while (another == 'y');
    return 0;
}