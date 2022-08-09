// wrtite a program to determine a number is prime or not
#include <stdio.h>
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
}



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



// print all the prime number between 1 to 300
#include <stdio.h>
int main(){
    int i,n;
    printf("Prime numbers between 1 to 300 are : \n1\t");
    for ( n = 1; n < 300; n++)
    {
        for ( i = 2; i < n; i++)
        {
            if (n % i == 0)
            break;
        }
        if (i == n)
        {
            printf("%d\t", n);
        }
       
    }
    return 0; 
}




// print all the odd numbers between 5 to 50
#include <stdio.h>
int main(){
    int i;
    for ( i = 5; i < 50; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
}



// print factorial of a given number
#include <stdio.h>
int main(){
    int num,i;
    printf("Enter a number: \n");
    scanf("%d",&num);
    int fact = 1;
    for ( i = 1; i <= num; i++)
    {
        fact = fact * i;  
    }
    printf("Factorial of %d is =%d", num, fact);
    return 0 ;
}



// print reverse of the table of a given number
#include <stdio.h>
int main(){
    int i,num,cal = 1;
    printf("Enter a number: \n");
    scanf("%d",&num);
    for ( i = 10; i >= 1; i--)
    {
        cal = i * num;
        printf("%d * %d = %d\n", i,num,cal);
    }
    return 0;
} 