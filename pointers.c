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
// #include<stdio.h>
// int main(){
//     int i = 10;
//     int *ptr = &i;    /* storing the memory address of i*/
//     int **pptr = &ptr;  /* storing the memory address of ptr*/
//     printf("value of i is = %d", **pptr);   /*first going to the memory address to ptr(*) then going to the memory address of i(**)  */
//     return 0;
// }
// two things to remeber * - when we need value, & - when we need address




/*  pointer in function call---- 1.call by value   2.call by reference
    1.call by value = we pass value of variable as argument (as a copy)
    2.call by reference = we pass address of variable as argument
*/
// #include<stdio.h>
// void square(int n);
// void _square(int *n);
// int main(){
//     int number = 6;
//     square(number);
//     printf("number is = %d\n", number);

//     _square(&number);
//     printf("number is = %d\n", number);
//     return 0;
// }

// // call by value(sending a copy of the variable,doesn't change the actual variable(number) )
// void square(int n){
//      n = n * n;
//      printf("square is = %d\n",n);
// }

// // call by reference, taking the address as a variable & change the variable(number)
// void _square(int *n){
//     *n = (*n) * (*n);
//     printf("square is = %d\n", *n);
// }




// swap two numbers (if input a=3,b=5 output will be a=5,b=3)
#include<stdio.h>
int swap(int *a , int *b);
int main(){
    int x=3,y=5;
    printf("before swap x=%d & y=%d\n",x,y );
    swap(&x,&y);
    printf("after swap x=%d & y=%d",x,y );
    return 0;
}
// call by reference
int swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

