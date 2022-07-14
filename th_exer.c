// profit or loss check
/*#include <stdio.h>
int main(){
    int cost_price,sell_price,profit,loss;
    printf("\nEnter the cost price of youer product = \n");
    scanf("%d", &cost_price);
    printf("Enter the elling price of your product = \n");
    scanf("%d", &sell_price);

    profit = sell_price - cost_price ;
    loss = cost_price - sell_price;

    if (sell_price > cost_price)
    {
        printf("You made profit of %d taka\n", profit);
    }
    else{
        printf("You made loss of %d taka", loss);
    }

    return 0;
    
}



// odd even check
#include <stdio.h>
int main(){
    int num;
    printf("\n Enter any no ");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("You have enter no: %d \n",num);
        printf("This is a even number");
    }
    else{
        printf("You have enter no: %d \n",num);
        printf("This is a odd number");
    }
    return 0;
} */



// check leap year or not
#include <stdio.h>
int main(){
    int year;
    printf("\n Enter any year to check leap year :");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        printf("%d is a leap year \n",year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    return 0;
}