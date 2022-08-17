// function structure
// #include<stdio.h>

void printHello();   /*function prototype*/
void printGoodbye();

int main(){
    printHello();     /*function call*/
    printGoodbye();

    return 0;
}

void printHello(){
    printf("Hello function!!\n");    /*function declaration*/
}
void printGoodbye(){
    printf("Good Bye");
}



// write a function that print Namaste if the user is indian & Bonjure if the user french
// #include<stdio.h>
void ind_user();
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
} 



// Recursion...........................................
// print sum of first n natural number
#include<stdio.h>
int sum(int n);
int main(){
    printf("sum of first natural number of 5 is = %d",sum(5));
    return 0;
}
int sum(int n){
    if (n == 1)  /*base case where exicution stsrt & program finish*/
    {
        return 1;
    }
    
    int sum_minus_n = sum(n-1);   /*n= 5 - 1+2+3+4+5 which written as (n-1)+n where n =5
    summery is sum of 5 think firstly calculate sum of 4 then add 5, then sum of 4 think 
    first add sum of 3 then add 4 and the process continue........*/
    int sumN = sum_minus_n + n;
}




// factorial of n      if n=5, 1*2*3*4*5, fact of 5 is = (n-1) * 5,fact of 4 is = (n-1) * 4 ....goes on till n = 1;
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
    return factN;
}




// write a function to convert celsius to farenhite    f = (c * 9/5)+32
#include<stdio.h>
float celToFaren(float cel);
int main(){
    float c;
    printf("Enter the temperature in celsius: \n");
    scanf("%f",&c);
    printf("Temperature in farenhite is= %f\n",celToFaren(c));
    return 0;
}
float celToFaren(float cel){
    return (cel * 0.18) + 32;
}




// write a function to calculate pertcentage of a students from marks in English,Science & Math
#include<stdio.h>
float per_marks(float mark_eng,float mark_sci,float mark_math);
int main(){
    int e,s,m;
    printf("Enter marks of English: \n");
    scanf("%d",&e);
    printf("Enter marks of Science: \n");
    scanf("%d",&s);
    printf("Enter marks of Math: \n");
    scanf("%d",&m);
    printf("Percentage of marks = %f\n",per_marks(e,s,m));
    return 0;
}
float per_marks(float mark_eng,float mark_sci,float mark_math){
    return (mark_eng + mark_sci + mark_math)/3;
}




// Write a function to print nth number of fibonacci series        
/*              0,1,1,2,3,5,8,13,21,34...
                for 3 step fibonacci series - fib(3-2) + fib(3-1) = 1 + 1 =2
                for 4 step fibonacci series - fib(4-2) + fib(4-1) = 1 + 2 =3
                for n step fibonacci series - fib(n-2) + fib(n-1)   */

#include<stdio.h>
int fibo_func(int step);
int main(){
    int n;
    printf("Enter the number for fibonacchi series you want : \n");
    scanf("%d",&n);
    printf("The Fibonacchi series is = %d\t",fibo_func(n));
    return 0;
}
int fibo_func(int step){
    if (step == 0)
    {
        return 0;
    }
    if (step == 1)
    {
        return 1;
    }
    
    
    int step_minus1 = fibo_func(step -1);
    int step_minus2 = fibo_func(step -2);
    int fiboN = step_minus1 + step_minus2;
    // printf("%d\t",fiboN);
    return fiboN;
}




//write a function to calculate sum of digits of a input number
#include<stdio.h>
int sum_digits(int num);
int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("Sum of its digits= %d\n",sum_digits(n));
    return 0;
}
int sum_digits(int num){
    int sum = 0,m;
    while (num > 0)
    {
        m = num % 10;
        sum = sum + m;
        num = num/10;
    }
    return sum;
} 




// write a function to find square root of a given number
#include<stdio.h>
#include<math.h>
float sqr_root(float num);
int main(){
    float n;
    printf("Enter a number: \n");
    scanf("%f",&n);
    printf("Square root of %f is = %f", n,sqr_root(n));
    return 0;
}
float sqr_root(float num){
    return sqrt(num);
}




// write a function to print "Hot" or "Cold" depending o the temperature user enter
#include<stdio.h>
char temp(int num);
int main(){
    int n;
    printf("Enter the temperature: \n");
    scanf("%d",&n);
    printf("%c",temp(n));
    return 0;
}
char temp(int num){
    if (num >= 30)
    {
        printf("Its Hotttttttt...!!");
    }else
    {
        printf("Its Colddddddd....!!");
    }
} 




//make your own POW function
#include<stdio.h>
int pow_func(int base,int power);
int main(){
    int a,b;
    printf("Enter base & power: \n");
    scanf("%d%d",&a,&b);
    printf("result is = %d",pow_func(a,b));
    return 0;
}
int pow_func(int base,int power){
    int result=1;
    for (int i = 1; i <= power; i++)
    {
        result = result * base;
    }
    return result;
}