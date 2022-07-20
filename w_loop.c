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
} 



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



// finding all the ASCII values between 0-255
#include <stdio.h>
int main(){
    int numbers = 0;
    while (numbers<=255)
    {
        printf("%c = %d\n",numbers,numbers);
        numbers ++;
    }
    
    return 0;
} */




// matchstick game
/* Write a C program for a matchstick game being played between the computer and a user. 
Your program should ensure that the computer always wins. Rules for the game are as follows:
– There are 21 matchsticks.
– The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
– After the person picks, the computer does its picking.
– Whoever is forced to pick up the last matchstick loses the game 

**The trick is, computers pick is always 5 minus the pick of the user. 
For example, if computers pick is variable c and user pick is stored in variable p, then:
c = 5 – p;
This makes sure computer always wins the game. That is, the last pick will always be of the user
*/

#include <stdio.h>
int main(){
    int match_num = 21,player,computer;
    while (1)
    {
        printf("\n No of MatchStick left = %d", match_num);
        printf("\nPlease pick 1 or 2 or 3 or 4 MatchSticks:\n");
        scanf("%d",&player);

        if(player > 4 || player < 1)
            continue;

        match_num = match_num - player;
        printf("\nNo of MatchStick left = %d",match_num);

        computer = 5 - player;
        printf("\nComputer has pick %d no of MatchSticks", computer);
        match_num = match_num - computer;

        if (match_num ==1)
        {
            printf("\nNo of MatchStick left = %d",match_num);
            printf("\n You have lost the game.......!!");
            break;
        }
    }
    
}



