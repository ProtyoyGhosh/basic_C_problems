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