// switch case structure
/*#include <stdio.h>
int main(){
    int i = 2;
    switch (i)
    {
        case 1:
            printf("i am in case 1");
            break;

        case 2:
            printf("i am in case 2");
            break;
        
        case 3:
            printf("i am in case 3");
            break;
        
        case 4:
            printf("i am in case 4");
            break;
        
        default:
        printf("I am in default");
            break;
    }
    return 0;
}*/




// Write a menu driven program which has following options:
/*  
   1.Factorial of a number
   2.Prime or not
   3.Odd or even
   4.Exit
once a menu item is selected the appropriate action should be taken and once this action is finished,
the menu should reappear unless the user hit the exit option it will continue.
*/
#include<stdio.h>
#include<stdlib.h>   /*for exit() function to work*/
int main(){
    int choice,i,num,fact;
    while(1){
        printf("\n1.factorial of a number\n");
        printf("2.Prime or not\n");
        printf("3.Odd or Even\n");
        printf("4.Exit\n");
        printf("Your Choice?\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: \n");
                scanf("%d", &num);
                fact = 1;
                for ( i = 1; i <= num; i++)
                {
                    fact = fact * i;
                }
                printf(">>>> factorial of %d is = %d <<<<",num,fact);
                break;
            
            case 2:
                printf("Enter a number: \n");
                scanf("%d", &num);

                for ( i = 2; i < num; i++)
                {
                    if (num % i == 0)
                    {
                        printf(">>>> This is not a prime number <<<<\n");
                        break;
                    }
                }    
                    
                if (i == num)
                {
                    printf(">>>> This is a prime number <<<<\n");
                }
                    
                break; 
            
            case 3:
                printf("Enter a number: \n");
                scanf("%d", &num);

                if (num % 2 == 0)
                {
                    printf(">>>> This is a even number <<<<\n");
                }
                else
                {
                    printf(">>>> This is a odd number <<<<\n");
                }
                break;

            case 4:
                exit(0);   /*Terminate the program exicution*/

            default:
                printf(">>>> Wrong value entered!!!! <<<<");
                break;
        }
    }
    return 0;
}