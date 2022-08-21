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




// A five digit posetive intiger is entered through keyboard,write a recursive function to calculate sum odf digits of the 5 digit numbers
#include<stdio.h>
int sumOf(int num);
int main(){
    int n;
    printf("enter a 5 digit number: ");
    scanf("%d\n",&n);
    printf("Sum of digits = %d",sumOf(n));
    return 0;
}
int sumOf(int num){
    int sum,remainder;
    if (num != 0)
    {
        remainder = num % 10;
        sum = remainder + sumOf(num/10);
    }else
    {
        return 0;
    }
    return sum;
}



// A positive intiger is entered through keyboard,write a program to obtain the prime factor of the number recursively
#include<stdio.h>
int prime_fact(int,int); 
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("prime factors are: ");
    prime_fact(num,2);
    return 0;
}
int prime_fact(int num, int i){
    if (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d",i);
            num = num / i;
        }else
        {
            i++; 
        }
        prime_fact(num,i);
    }
}



// write a recursive function to obtain the first 25 numbers of a fibonacci sequence
#include<stdio.h>
int fibo(int);
int main(){
    int terms = 25,i,n=0;
    for ( i = 1; i <= terms; i++)
    {
        printf("The fibonacci sequence: %d\t",fibo(n));
        n++;
    }
    
    return 0;
}
int fibo(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }else{
        return fibo(n -1) + fibo(n - 2);
    }
    
}




// write a recursive function to obtain the sum of first 25 natural number
#include<stdio.h>
int sum(int n);
int main(){
    int num =25,result = 0;
    result = sum(num);
    printf("%d",result);
    return 0;
}
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    else{
        return sum(n-1) + n;
    }
    
} 




// a positive intiger is input through keyboard,write a function to find the binary equivalent of this number
#include<stdio.h>
int binary_eqi(int n);
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("Binary equvalent of %d is =%d\n",num,binary_eqi(num));
    return 0;
}
int binary_eqi(int n){
    if (n == 0)
    {
        return 0;
    }else
    {
        return (n % 2) + 10 * binary_eqi(n /2);
    }
    
    
}