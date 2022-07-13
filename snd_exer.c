// area of a triangle with 3 sides given

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,s,area ;   /*here a,b,c area the 3 sides,s is the semi perimeter*/
    printf("\n Enter the 3 sides of the traingle: ");
    scanf("%f %f %f", &a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Three sides of the traingule are: %f %f %f \n", a,b,c);
    printf("Area of the traingle is = %f \n", area);

    return 0;
} 



// currency problem
#include <stdio.h>

int main(){
    int one_tk,two_tk,five_tk,ten_tk,fifty_tk,hund_tk,no_of_notes,amount;
    printf("\n Enter the no of amount = ");
    scanf("%d", &amount);

    printf("You have enter amount: %d\n", amount);

    hund_tk = amount / 100 ;
    amount = amount % 100 ; 

    fifty_tk = amount / 50 ;
    amount = amount % 50 ;

    ten_tk = amount / 10 ;
    amount = amount % 10 ;

    five_tk = amount / 5 ;
    amount = amount % 5 ;

    two_tk = amount / 2 ;
    amount = amount % 2 ;

    one_tk = amount / 1 ;
    amount = amount % 1 ;

    no_of_notes = hund_tk + fifty_tk + ten_tk + five_tk + two_tk + one_tk ;

    printf("Smallest no of notes that combine that amount will be %d", no_of_notes);

    return 0;
} 



// reverse a five digit number & sum of its digits
#include <stdio.h>

int main(){
    int given_nu, rev_num = 0, n1,n2,n3,n4,n5;
    float total;
    printf("\n Enter a 5 digit number : ");
    scanf("%d", &given_nu);

    n1 = given_nu - (given_nu / 10) * 10;
    rev_num = rev_num * 10 + n1;
        given_nu = given_nu / 10;
    n2 = given_nu - (given_nu / 10) * 10;
    rev_num = rev_num * 10 + n2;
        given_nu = given_nu / 10;
    n3 = given_nu - (given_nu / 10) * 10;
    rev_num = rev_num * 10 + n3;
        given_nu = given_nu / 10;
    n4 = given_nu - (given_nu / 10) * 10;
    rev_num = rev_num * 10 + n4;
        given_nu = given_nu / 10;
    n5 = given_nu - (given_nu / 10) * 10;
    rev_num = rev_num * 10 + n5;

    total = n1+n2+n3+n4+n5;

    printf("The reversed number is %d \n", rev_num);
    printf("sum of its digits = %f", total);
    return 0;
}