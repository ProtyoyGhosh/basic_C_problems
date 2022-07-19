// calculate overtime pay of 5 employees using while loop
/*#include <stdio.h>
int main(){
    float ot_pay;
    int hour, i=0;

    while (i <= 5)
    {
        printf("\n Enter the number of hours you work: ");
        scanf("%d", &hour);

        if (hour > 40)
        {
            ot_pay  = (hour - 40) * 120.00 ;
            printf("\n You have worked %d hours & You'll get RS %f for your overtime", hour,ot_pay);
        }
        else
        {
            printf("\n Yoy have worked %d hours & You haven't done any overtime", hour);
        }
        i++ ;
    }
    return 0;
} *




// find the factorial value
#include <stdio.h>
int main(){
    int num,fact,i;
    printf("\n Enter any number: ");
    scanf("%d",&num);
    fact = i = 1;
    while (i <= num)
    {
        fact = fact * i;
        i++ ;
    }
    printf("\n The factorial of %d is = %d\n", num,fact);
    return 0;
} 



// finding raised to the power of two given number
#include<stdio.h>
int main(){
    int i;
    float num1,num2,power;
    printf("\n Enter two numbers: ");
    scanf("%f %f", &num1,&num2);

    power=i=1;
    while (i<=num2)
    {
        power = power * num1;
        i++;
    }
    printf("\n %f to the power %f is = %f",num1,num2,power);
    return 0;
} */



// printing all the armstrong number between 1 to 500
#include<stdio.h>
int main(){
    int num,count=1,rem,sum;
    while (count <= 500)
    {
        num = count;
        sum = 0;
    
        while (num)
        {
            rem = num % 10;
            sum = sum + (rem*rem*rem);
            num =num/10;
        }
        if (count == sum)
        {
            printf("\n %d is an armstrong number\n", count);
        }
        count ++;
    }
    return 0;
}