// print 2 charecter string firstNmae & lastName using for loop
/*#include <stdio.h>
void printString(char arr[]);
int main()
{
    char firstName[] = "Protyoy";
    char lastName[] = "Ghosh";
    printString(firstName);
    printString(lastName);

    return 0;
}
void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++) /*beacuse every string finish with a null charecter & also because of it didn't pass array size in function declaration.
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

// using string format specifier to print a string
#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%s\n", name);
    printf("Your name is %s", name);
    return 0;
}

// ask user to input their first name & print it back to the.Try this also with full name
#include <stdio.h>
int main()
{
    // char fName[50];
    // char lName[50];
    // printf("Enter your first name: \n");
    // scanf("%s", fName);
    // printf("Enter your first name: \n");
    // scanf("%s", lName);
    // printf("Hello %s %s", fName, lName);

    // scanf cann't input multi word strings with spaces,this is where we use gets() & puts()
    // gets is dangerious & outdated so we use fgets().
    // fgets()/gets() takes input & puts() gives the output
    char fullName[50];
    // gets(fullName);
    fgets(fullName, 50, stdin);
    puts(fullName);
    return 0;
}

// take a string input from the user & print the length of the string
#include <stdio.h>
int priintLength(char arr[]);
int main()
{
    char name[50];
    fgets(name, 50, stdin);
    printf("you have %d charecter", priintLength(name));

    return 0;
}
int priintLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

// some built in function for string
#include <stdio.h>
#include <string.h>
int main()
{
    // length of the string
    char name[] = "protyoy";
    int length = strlen(name);
    printf("length is: %d\n", length);

    // copy one string value into another
    char oldStr[] = "west bengal";
    char newStr[] = "kolkata";
    strcpy(oldStr, newStr);
    puts(oldStr);

    // concatinate two string
    char fName[100] = "protyoy";
    char lName[] = " ghosh";
    strcat(fName, lName);
    puts(fName);

    // comparing two string
    char fStr[] = "banana";
    char sStr[] = "apple";
    int result = strcmp(fStr, sStr);
    printf("%d", result);

    return 0;
}

// taking input from iser using %c and print them
#include <stdio.h>
int main()
{
    char str[100];
    char ch;
    int i;
    for (i = 0; i != '\n'; i++)
    {
        scanf("%c", &ch);
        str[i] = ch;
    }
    str[i] = '\0';
    puts(str);
}

// find the salted from of a password entered by the user ,if salt is "123", added it at the end of the password
#include <stdio.h>
#include <string.h>
void salting(char password[]);
int main()
{
    char password[100];
    printf("Enter your password: ");
    scanf("%s", &password);

    salting(password);
    return 0;
}
void salting(char password[])
{
    char newPassword[200];
    char salt[] = "123";
    strcpy(newPassword, password);
    strcat(newPassword, salt);
    puts(newPassword);
}

// write a function name slice which takes a string and return a sliced from index n to m
#include <stdio.h>
void sliced(char str[], int n, int m);
int main()
{
    char str[50] = "bangladesh";
    sliced(str, 2, 6);
    return 0;
}
void sliced(char str[], int n, int m)
{
    char newStr[50];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}*/

// write a function to count the occurence of vowels in a string
#include <stdio.h>
int countVowels(char str[]);
int main()
{
    char str[50] = "bangladesh";
    printf("voels have: %d", countVowels(str));
    return 0;
}
int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}