// write a program to calculate the avarage of numbers obtain by 10 students in a class
#include <stdio.h>
int main()
{
    int marks[30], avg, sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the numbers of 10 students: ");
        scanf("%d\n", &marks[i]); /* store data in the declared array*/
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + marks[i]; /* read data from the array*/
    }
    avg = sum / 10;
    printf("Avarage of the numbers is= %d\n", avg);

    return 0;
}

// write a program to enter price of three items & print their final cost with GST [18% of GST]
#include <stdio.h>
int main()
{
    float final_cost[3];
    printf("Enter prices of rice,mik & oil: ");
    scanf("%f", &final_cost[0]);
    scanf("%f", &final_cost[1]);
    scanf("%f", &final_cost[2]);

    printf("Rice price after GST = %f\n", final_cost[0] + (final_cost[0] * 0.18));
    printf("milk price after GST = %f\n", final_cost[1] + (final_cost[1] * 0.18));
    printf("oil price after GST = %f\n", final_cost[2] + (final_cost[2] * 0.18));

    return 0;
}

// pointer arithmetic
// case 1
#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);

    // beacause ptr is a int value & int value = 4 byte,ptr++ means it will increase its byte by 4;
    ptr++;
    printf("ptr = %u\n", ptr);

    // it will decrease it byte by 4
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}

// case 2
#include <stdio.h>
int main()
{
    float age = 22.0;
    float *ptr = &age;
    printf("ptr = %u\n", ptr);

    // increasing by 4
    ptr++;
    printf("ptr = %u\n", ptr);

    // decreasing by 4
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}

// case 3
#include <stdio.h>
int main()
{
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u\n", ptr);

    // increasing by 1 because of ch type
    ptr++;
    printf("ptr = %u\n", ptr);

    // decreasing by 1
    ptr--;
    printf("ptr = %u\n", ptr);
    return 0;
}

#include <stdio.h>
int main()
{
    int memory = 99;
    int *ptr = &memory;
    printf("ptr = %d\n", ptr);
    ptr++;
    printf("ptr = %d\n", ptr);
    ptr = ptr - 10;
    printf("ptr = %d\n", ptr);
    return 0;
}

// write a function that interchanges element at odd position with elements at even position in an array of 10 elements
#include <stdio.h>
int main()
{
    int num[10] = {10, 3, 34, 67, 89, 99, 2, 76, 43, 65};
    int i, t;

    for (i = 0; i < 10; i += 2)
    {
        t = num[i];
        num[i] = num[i + 1];
        num[i + 1] = t;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the number of the sudent %d: \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("number obtain by student %d is :%d \n", i + 1, marks[i]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int i, arr[5];
    for (i = 0; i <= 4; i++)
    {
        printf("Enter number of student %d: \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("Number of student %d is : %d\n", i + 1, arr[i]);
    }

    return 0;
}

// different operations on pointer
#include <stdio.h>
int main()
{
    int a, b, c, *p, *q;
    // addition of a number to a pointer
    p = &a;
    printf("address of p is : %u\n", p);
    p = p + 1;
    printf("adding 1 byte into address of p is : %u\n", p);

    // substraction of a number to a pointer
    q = &b;
    printf("address of q is : %u\n", q);
    q = q - 1;
    printf("substracting 1 byte from address of q is : %u\n", q);

    // substraction a pointer from a pointer
    c = p - q;
    printf("substracting 1 pointer from another pointer : %u\n", c);

    // comparisson of two pointer
    if (p > q)
    {
        printf("ulalaaaaaaaaaaa yeahhhh\n");
    }
    else
    {
        printf("ohhhhhhh yessssss\n");
    }

    // increment of a pointer
    int age = 22;
    int *ptr = &age;
    printf("original = %u\n", ptr);
    ptr++;
    printf("increment = %u\n", ptr);

    return 0;
}

#include <stdio.h>

void print_array(int ptr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("Value of %d is: %d\n", i + 1, ptr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    print_array(arr, 5);
    return 0;
}

// in an array of numbers,find how many times number "x" occures?
#include <stdio.h>
int main()
{
    int arr[] = {5, 3, 9, 10, 2, 3, 3, 4, 5};
    int total = 0, i;
    for (i = 0; i <= 8; i++)
    {
        if (arr[i] == 3)
        {
            total = total + 1;
        }
    }
    printf("no of 3 occurs: %d times ", total);
    return 0;
}

// write a program that interchanges element att odd position with elements at even position in an array of 10 elements
#include <stdio.h>
int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, t;
    for (i = 0; i < 10; i += 2)
    {
        t = num[i];
        num[i] = num[i + 1];
        num[i + 1] = t;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}

// write a program to copy the contents of a 5-element intiger array into another array in reverse order
#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], i, j;
    printf("Enter 5 digits: \n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; j = 4, i <= 4; i++, j--)
        ;
    {
        arr2[j] = arr1[i];
    }

    printf("Digits in reverse order: \n");
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", arr2[i]);
    }

    return 0;
}

// program to find a number an its frequency in array
#include <stdio.h>
int main()
{
    int num[] = {2, 32, 3, 3, 3, 2, 2, 4, 5, 3}, i, n, count = 0;
    printf("Enter an element to search: \n");
    scanf("%d", &n);
    for (i = 0; i <= 9; i++)
    {
        if (num[i] == n)
        {
            count++;
        }
    }
    printf("Number %d is found %d times in the array\n ", n, count);

    return 0;
}

// twenty five numbers are entered from the keyboard into an array.write a program to find out how many of them are posetive,how many of them
// are negetive,how many are odd & how many are even?
#include <stdio.h>
int main()
{
    int num[25], i, n, p_count = 0, n_count = 0, o_num = 0, e_num = 0;
    printf("enter 25 numbers: \n");
    for (i = 0; i <= 24; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i <= 24; i++)
    {
        if (num[i] >= 0)
        {
            p_count++;
        }
        else
        {
            n_count++;
        }
    }
    for (i = 0; i <= 24; i++)
    {
        if (num[i] % 2 == 0)
        {
            e_num++;
        }
        else
        {
            o_num++;
        }
    }

    printf("Posetive numbers count: %d\n", p_count);
    printf("Negetive numbers count : %d\n", n_count);
    printf("Even numbers count : %d\n", e_num);
    printf("Odd numbers count : %d\n", o_num);
    return 0;
}

// write a program using pointers to find the smallest number in an array
#include <stdio.h>
int main()
{
    int num[6] = {1, 2, 3, 4, 5, 6}, i, *small;
    small = &num[0];
    for (i = 1; i <= 6; i++)
    {
        if (*(num + i) < *small)
        {
            *small = *(num + i);
        }
    }
    printf("smallest number of this array is = %d", *small);

    return 0;
}
