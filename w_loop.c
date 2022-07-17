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
} */




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