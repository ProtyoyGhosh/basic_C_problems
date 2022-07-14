// calculate salary from user input information
/*#include <stdio.h>
int main(){
    int year_of_service,qualification,salary;
    char gender;

    printf("\n Enter your gender (Male = m,Female = f) : ");
    scanf("%c", &gender);

    printf("\n Enter your year of service (10 or more than that in number) : ");
    scanf("%d", &year_of_service);

    printf("\n Enter your qualification (Post-Graduate = 1 , Graduate = 0) : ");
    scanf("%d", &qualification);

    if (gender == 'm' && year_of_service >= 10 && qualification == 1)
    {
        printf("Your salary will be 11000");
    }
    else if (gender == 'm' && year_of_service >= 10 && qualification == 0)
    {
        printf("Your salary will be 10000");
    }
    else if (gender == 'm' && year_of_service < 10 && qualification == 1)
    {
        printf("Your salary will be 10000");
    }
    else if (gender == 'm' && year_of_service < 10 && qualification == 0)
    {
        printf("Your salary will be 7000");
    }
    else if (gender == 'f' && year_of_service >= 10 && qualification == 1)
    {
        printf("Your salary will be 12000");
    }
    else if (gender == 'f' && year_of_service >= 10 && qualification == 0)
    {
        printf("Your salary will be 9000");
    }
    else if (gender == 'f' && year_of_service < 10 && qualification == 1)
    {
        printf("Your salary will be 10000");
    }
    else if (gender == 'f' && year_of_service < 10 && qualification == 0)
    {
        printf("Your salary will be 6000");
    }
    // else
    // {
    //     printf("Wrong value entered");
    // }
    return 0;
} 



// check armstrong number or not
// Armstrong number is a number that is equal to the sum of cubes of its digits. 
// For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
#include <stdio.h>
int main(){
    int number,result,n1,n2,n3,check;
    printf("\n Enter any number : ");
    scanf("%d", &number);
    result = number;
    
    n1 = number - (number/10) *10;
    number = number / 10;

    n2 =number - (number/10) *10;
    number = number / 10;

    n3 = number - (number/10) *10;
    number = number /10;

    check = (n1*n1*n1) + (n2*n2*n2) + (n3*n3*n3);

    if (result == check)
    {
        printf("This is a armstrong number");
    }
    else
    {
        printf("This is not a armstrong number");
    }
    return 0;
} 



// check natural number or not
// all integers greater than 0 are natural number
#include <stdio.h>
int main(){
int number;
printf("\nEnter any number: ");
scanf("%d",&number);

if (number >= 0)
{
    printf("This is a natural number");
}
else
{
    printf("This is not a natural number");
}
return 0;

} */



// charecter is in capital letter?small case? digit or sysmbol?
// charecters & their ASCII values below >>>
// A-Z(65-90), a-z(97-122), 0-9(48-57), symbols(0-47) / (58-64) / (91-96) / (123-127)
#include <stdio.h>
int main(){
    char ch;
    printf("\n Enter any charecter: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch<= 90)
    {
        printf("\n The charecter is an upper case letter");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("\n The chrecter is a lower case letter");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("\n The charecter is a digit");
    }
    else
    {
        printf("\n The charecter is a special symbol");
    }
    
    return 0;
}