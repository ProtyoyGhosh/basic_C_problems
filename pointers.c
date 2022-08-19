// A variable that store the memory address of another varable is call pointer
// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;   /*  * means - value of address, & means - adress of , here storing memory address of age*/
//     int _age = *ptr;   /* value of memory address of *ptr storing in the new variable _age*/
//     printf("%d\n",_age);

//     // format specifiers
//     // printf("%p\n", &age);    %p is used for pointer but its gives hexadecimal format result,so we use %u for unsined int
//     // printing adress
//     printf("%u\n", &age);    /*printing the memory address of age*/
//     printf("%u\n", ptr);    /* printing the value of ptr where the memory address of age stored,both value will be same */
//     printf("%u\n", &ptr);   /* printing the memory address of ptr */

//     // printing values
//     printf("%d\n", age);    /* age er value */
//     printf("%d\n", *ptr);    /* ptr er modhe je memory address store ase tar value */
//     printf("%d\n", *(&age));  /* age er je memory address ase tar value*/
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int *ptr;
//     int x;

//     ptr = &x;
//     *ptr = 0;  /* x = 0*/
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;   /* x = 5*/
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++ ;  /*   *ptr = (*ptr) + 1 or x = x + 1   */
//     printf("x = %d\n", x);      /* x = 6*/
//     printf("*ptr = %d\n", *ptr);  /* x = 6*/

//     return 0;
// }



// pointer to pointer
// a variable that store the memory address of another pointer (int **_variableName or float **_variableName or char **_variableName)
// pointer store the memory address of normal variable & pointer to pointer store memory address of another pointer

// print the value of i with pointer to pointer
#include<stdio.h>
int main(){
    int i = 10;
    int *ptr = &i;    /* storing the memory address of i*/
    int **pptr = &ptr;  /* storing the memory address of ptr*/
    printf("value of i is = %d", **pptr);   /*first going to the memory address to ptr(*) then going to the memory address of i(**)  */
    return 0;
}
// two things to remeber * - when we need value, & - when we need address

