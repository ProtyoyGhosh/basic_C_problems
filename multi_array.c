// roll num & marks obtain by students side by side in a matrix
#include <stdio.h>
int main()
{
    int stud[4][2];
    int i;
    for (i = 0; i <= 3; i++)
    {
        printf("Enter roll number & marks : \n");
        scanf("%d %d", &stud[i][0], &stud[i][1]);
    }
    for (i = 0; i <= 3; i++)
    {
        printf("Roll Marks %d %d\n", stud[i][0], stud[i][1]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int stud[4][2] = {
        {1234, 56},
        {1235, 65},
        {1236, 78},
        {1237, 87}};
    printf("marks of the third student: %d\n", stud[2][1]);
    printf("Roll nos:%d", stud[2][0]);
    return 0;
}

// 2D array using pointer notation
#include <stdio.h>
int main()
{
    int stud[4][2] = {
        {1234, 56},
        {1235, 65},
        {1236, 78},
        {1237, 87}};
    int i, j;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            // this all are same
            // printf("%d\t", *(*(stud + i) + j));
            // printf("%d\t", stud[i][j]);
            printf("%d\t", *(stud[i] + j));
        }
        printf("\n");
    }

    return 0;
}

// write a function to count the numbers of odd numbers in an array
#include <stdio.h>
int countOdd(int arr[], int n);

int main()
{
    int arr[] = {1, 1, 12, 2, 3};
    printf("you have %d odd numbers", countOdd(arr, 5));
    return 0;
}
int countOdd(int arr[], int n)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

// write a function to reverse an array
#include <stdio.h>
int reverseArray(int arr[], int n);
void printArray(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 6);
    printArray(arr, 6);
    return 0;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int reverseArray(int arr[], int n)
{
    int fstName, sndName, i;
    for (i = 0; i < n / 2; i++)
    {
        fstName = arr[i];
        sndName = arr[n - i - 1];
        arr[i] = sndName;
        arr[n - i - 1] = fstName;
    }
}

// write a program to store first n fibonacci number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: *n>2\n");
    scanf("%d", &n);

    int fibArray[n];
    fibArray[0] = 0;
    fibArray[1] = 1;
    printf("%d\t %d\t", fibArray[0], fibArray[1]);
    for (int i = 2; i < n; i++)
    {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
        printf("%d\t", fibArray[i]);
    }

    return 0;
}

// create a 2D array to store the multiplication table of 2 & 3
#include <stdio.h>
int multiTable(int arr[][10], int n, int m, int number);
int main()
{
    int table[2][10];
    multiTable(table, 0, 10, 2);
    multiTable(table, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[0][i]);
    }
    printf("%d\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", table[1][i]);
    }

    return 0;
}
int multiTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < 10; i++)
    {
        arr[n][i] = number * (i + 1);
    }
}

// write a program to pick the largest number from a 5 ro by 5 column matrix
#include <stdio.h>
int main()
{
    int matrix[5][5] = {
        {2, 4, 6, 8, 10},
        {3, 6, 9, 12, 15},
        {4, 8, 12, 16, 20},
        {5, 10, 15, 20, 25},
        {6, 12, 18, 25, 30}};
    int i, j, largest;
    largest = matrix[0][0];

    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
    }
    printf("The largest number in the matrix is: %d\n", largest);

    return 0;
}

// Exchange the elements of each row with the elements of corresponding column of a 3/5 matrix.
#include <stdio.h>
int main()
{
    int matrix_1[3][5] = {
        1, 2, 3, 4, 5,
        6, 7, 8, 9, 10,
        11, 12, 13, 14, 15};
    int matrix_2[5][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            matrix_2[j][i] = matrix_1[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; i < 3; j++)
        {
            printf("%d\t", matrix_2[i][j]);
        }
        // printf("\n");
    }

    return 0;
}

// write a program to create an array of 10 integers & store multiplication table of 5
#include <stdio.h>
int main()
{
    int table[10], number;
    printf("Enter a number to gets its multiplication table: \n");
    scanf("%d", &number);
    for (int i = 0; i < 10; i++)
    {
        table[i] = number * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", number, i + 1, table[i]);
    }

    return 0;
}

// write a program containing functions which count the number of posetive integer in an array
// #include <stdio.h>
// int pos_int(int arr[], int n);
// int main()
// {
//     int arr[] = {1, 2, 3, 4, -1 - 2 - 3 - 4};
//     printf("no of posetive intiger are: %d", pos_int(arr, 8));
//     return 0;
// }
// int pos_int(int arr[], int n)
// {
//     int i, count = 0;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             count += 1;
//         }
//     }
//     return count;
// }
#include <stdio.h>
int main()
{
    int pos_count = 0, neg_count = 0, i;
    int arr[6] = {1, -1, -2, 345, 67, -9};

    for (i = 0; i < 6; i++)
    {
        if (arr[i] >= 0)
        {
            pos_count++;
        }
        if (arr[i] < 0)
        {
            neg_count++;
        }
    }
    printf("posetive integers have: %d & negetive integers have: %d", pos_count, neg_count);

    return 0;
}