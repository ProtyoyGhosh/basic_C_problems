// reverse any num & check is it simmiler to original number
#include <stdio.h>
int main(){
    int original_num,reverse_num = 0,n1,n2,n3,n4,n5, confirm_num;
    printf("\n Enter a five digit number");
    scanf("%d",&original_num);

    printf("confirm your number");
    scanf("%d",&confirm_num);

    n1 = original_num - (original_num / 10)*10;
    reverse_num = (reverse_num * 10) + n1;
    original_num = original_num / 10;

    n2 = original_num - (original_num / 10) * 10;
    reverse_num = (reverse_num * 10) + n2;
    original_num = original_num / 10;

    n3= original_num - (original_num / 10) * 10;
    reverse_num = (reverse_num * 10) + n3;
    original_num = original_num / 10;

    n4 = original_num - (original_num / 10) * 10;
    reverse_num = (reverse_num * 10) + n4;
    original_num = original_num / 10;


    n5 = original_num - (original_num / 10) * 10;
    reverse_num = (reverse_num * 10) + n5;
    original_num = original_num / 10;

    printf("Reverse number is = %d \n", reverse_num);
    printf("%d %d",original_num);

    if (confirm_num = reverse_num)
    {
        printf("original number & reversed number are equal \n");
    }
    else
    {
        printf("original number & reversed umber are not equal \n");
    }
    
    return 0 ;
} 


// check smallest number of 3
#include <stdio.h>
int main(){
    int age_1,age_2,age_3;
    printf("\n Enter the age of Ram: ");
    scanf("%d",&age_1);

    printf("\n Enter the age of Shyam: ");
    scanf("%d",&age_2);

    printf("\n Enter the age of Ajay: ");
    scanf("%d",&age_3);

    if (age_1 < age_2 && age_1 < age_3)
    {
        printf("\n Youngest age is = %d", age_1);
    }
    else if (age_2 < age_1 && age_2 < age_3)
    {
        printf("\n Youngest age is =%d", age_2);
    }
    else
    {
        printf("\n Youngest age is =%d", age_3);
    }
    return 0;
} 


// check valid traingle
#include <stdio.h>
int main(){
    int angle_1,angle_2,angle_3,total = 180;
    printf("\n Enter the 3 angle of traingle = ");
    scanf("%d %d %d", &angle_1,&angle_2,&angle_3);

    if (total == angle_1 + angle_2 + angle_3)
    {
        printf("\n The Traingle is a valid one");
    }
    else
    {
        printf("The traiangle is not valid");
    }
    return 0;
} 



//find the absolute value of a number 
#include <stdio.h>
int main(){
    int num,pos_num,neg_num;
    printf("\n Enter any digit to finds its absulute value = ");
    scanf("%d", &num);

    if (num >= 0)
    {
        pos_num = num * 1;
        printf("Absolute value is %d", pos_num);
    }
    else
    {
        neg_num = num * (-1);
        printf("Absolute value is %d", neg_num);
    }
    return 0;
    
} 



// area of rectangle is greater than its perimeter
// The perimeter P of a rectangle is given by the formula,  P=2l+2w
// The area A of a rectangle is given by the formula,  A=lw
#include <stdio.h>
int main(){
    float l,w,A,P;
    printf("\n Enter the length of the rectangle = ");
    scanf("%f", &l);
    printf("\n Enter the width of the rectangle = ");
    scanf("%f", &w);

    P = (2 * l) + (2 * w);
    A = l * w;

    if (A > P)
    {
        printf("\n The area of the rectangle is greater than the perimeter");
    }
    else
    {
        printf("\n The perimeter of the rectangle is greater than the area");
    }
    return 0;
    
} 



//  check three points fall into one straight line

// Slope of points (x1, y1) and (x2, y2) = m;
// m = (y2 – y1) / (x2 – x1);
// Slope of points (x2, y2) and (x3, y3) = n;
// n = (y3 – y2) / (x3 – x2);
// it will be a straight line if m=n

#include <stdio.h>
int main(){
    float x1,x2,x3,y1,y2,y3,m,n;
    printf("\n Enter the value of x1,y1 = ");
    scanf("%f %f", &x1,&y1);
    printf("\n Enter the value of x2,y2 = ");
    scanf("%f %f", &x2,&y2);
    printf("\n Enter the value of x3,y3 = ");
    scanf("%f %f", &x3,&y3);

    m = (y2 - y1) / (x2 - x1);
    n = (y3 - y2) / (x3 - x2);

    if (m == n)
    {
        printf("\n The three points fall into straight line");
    }
    else
    {
        printf("\n The three points won't fall into straight line");
    }
    return 0;

} 
