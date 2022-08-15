// function structure
// #include<stdio.h>

// void printHello();   /*function prototype*/
// void printGoodbye();

// int main(){
//     printHello();     /*function call*/
//     printGoodbye();

//     return 0;
// }

// void printHello(){
//     printf("Hello function!!\n");    /*function declaration*/
// }
// void printGoodbye(){
//     printf("Good Bye");
// }



// write a function that print Namaste if the user is indian & Bonjure if the user french
#include<stdio.h>
/*void ind_user();
void french_user();

int main(){
    int user;
    printf("if you are indian press 1 or if you are french press 2 \n");
    scanf("%d",&user);
    if (user == 1)
    {
        ind_user();
    }
    else
    {
        french_user();
    }
    
    return 0;
}

void ind_user(){
    printf("Namste!!!");
}
void french_user(){
    printf("Bonjure!!!");
}




// write function to calculate the area of circle,square & rectangular
#include<stdio.h>
float circleArea(float a);
float squareArea(float a);
float rectArea(float a, float b);
int main(){
    float a = 5.0 ,b = 4.0;
    printf("Area of circle is = %f\n",circleArea(a));
    printf("Area of square is = %f\n",squareArea(a));
    printf("Area of Reactangular is = %f\n",rectArea(a,b));
    return 0;
}

float circleArea(float a){
    return 3.1416 * a * a;
}
float squareArea(float a){
    return a * a;
}
float rectArea(float a, float b){
    return a * b;
} */



// Recursion...........................................
// print sum of first n natural number
// #include<stdio.h>
// int sum(int n);
// int main(){
//     printf("sum of first natural number of 5 is = %d",sum(5));
//     return 0;
// }
// int sum(int n){
//     if (n == 1)  /*base case where exicution stsrt & program finish*/
//     {
//         return 1;
//     }
    
//     int sum_minus_n = sum(n-1);   /*n= 5 - 1+2+3+4+5 which written as (n-1)+n where n =5
//     summery is sum of 5 think firstly calculate sum of 4 then add 5, then sum of 4 think 
//     first add sum of 3 then add 4 and the process continue........*/
//     int sumN = sum_minus_n + n;
// }




// factorial of n      if n=5, 1*2*3*4*5, multi of 5 is = (n-1) * 5,multi of 4 is = (n-1) * 4 ....goes on till n = 1;
#include<stdio.h>
int fact(int n);
int main(){
    int user;
    printf("enter number = \n");
    scanf("%d",&user);
    printf("factorial of 4 is = %d",fact(user));
    return 0;
}
int fact(int n){
    if (n == 1)
    {
        return 1;
    }
    
    int fact_minus_1 = fact(n-1);
    int factN = fact_minus_1 * n;
}
