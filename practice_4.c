// check wheather the traingle is isoscales,equilateral,scalene,right-angled?
// isoscale = two equal sides, equilateral = all equal sides,
// scalene = none equal sides, right-angeled = (hy^2 = per^2 + base^2)
#include <stdio.h>
int main(){
    int hypontenuse,perpendiculer,base;
    printf("\n Enter length of three sides of the traingle: ");
    scanf("%d %d %d", &hypontenuse,&perpendiculer,&base);

    if (hypontenuse == perpendiculer && hypontenuse == base && perpendiculer == base)
    {
        printf("\n This is a equilateral Traingle because it has all equal sides");
    }
    else if (hypontenuse == perpendiculer || hypontenuse == base|| perpendiculer == base)
    {
        printf("\n This is  isoscale Traingle beacuse it has two equal sides");
    }
    if (hypontenuse != perpendiculer && hypontenuse != base && perpendiculer != base)
    {
        printf("\n This is a scalene Traingle because it has no equal sides");
    }
    if (hypontenuse * hypontenuse == (perpendiculer * perpendiculer) + (base * base))
    {
        printf("\n This is right angled triangle because it has: a(sqr) = b(sqr) + c(sqr)");
    }
    
    return 0;
} 



// RGB to CMYK color
#include <stdio.h>
int main(){
    float red,green,blue,white,cyan,magenta,yellow,black,max;

    printf("\n Enter the value of R,G,B in range of (0-255): ");
    scanf("%f %f %f", &red,&green,&blue);

    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = magenta = yellow = 0;
        black = 1;
        black = 1;
    }
    else
    {
        red = red / 255;
        green = green / 255;
        blue = blue / 255;

        max = red;
        if (green > red)
        {
            max = green;
        }
        if (blue > red)
        {
            max = blue;
        }
        white = max;
        
        cyan = (white - red) / white ; 
        magenta = (white - green) / white ; 
        yellow = (white - blue) / white ; 
        black = 1 - white;
    }
    
    printf("CMYK : %f %f %f %f", cyan,magenta,yellow,black);
    return 0;
} 



// check the grade of steel
#include <stdio.h>
int main(){
    int hardness,tensile_strength;
    float carbon_content;

    printf("\n Enter the hardness of the steel (greater than 50 is recommended) : ");
    scanf("%d", &hardness);
    printf("\n Enter the carbon content of the steel (less than 0.7 is recommended) : ");
    scanf("%f", &carbon_content);
    printf("\n Enter the tensile strength of the steel (greater than 5600 is recommended) : ");
    scanf("%d", &tensile_strength);

    if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
    {
        printf("\n Grade of the steel is 10");
    }
    else if (hardness > 50 && carbon_content < 0.7)
    {
        printf("\n Grade of the stell is 9");
    }
    else if (carbon_content < 0.7 && tensile_strength > 5600)
    {
        printf("\n Grade of the stell is 8");
    }
    else if (hardness > 50 && tensile_strength > 5600)
    {
        printf("\n Grade of the stell is 7");
    }
    else if (hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600)
    {
         printf("\n Grade of the stell is 7");
    }
    else
    {
        printf("\n Grade of the stell is 6");
    }
    return 0;
} 



// calculate BMI
// BMI = weight / (height x height);
#include <stdio.h>
int main(){
    float weight,height,bmi;
    printf("\n Enter your weight(in kg): ");
    scanf("%f", &weight);
    printf("\n Enter your height in meter: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    if (bmi < 15)
    {
        printf("\n Your BMI is %f: & you are in Starvation catagory ", bmi);
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("\n Your BMI is %f: & you are in Anorexic catagory ", bmi);
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("\n Your BMI is %f: & you are in UnderWeight catagory ", bmi);
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("\n Your BMI is %f: & you are in Ideal catagory ", bmi);
    }
    else if (bmi >= 25 && bmi <= 25.9)
    {
        printf("\n Your BMI is %f: & you are in OverWeight catagory ", bmi);
    }
    else if (bmi >= 30 && bmi <= 30.9)
    {
        printf("\n Your BMI is %f: & you are in Obese catagory ", bmi);
    }
    else if (bmi >= 40)
    {
        printf("\n Your BMI is %f: & you are in Morbidly Obese catagory ", bmi);
    }
    return 0;
} 



// find greatest of three number entered
#include<stdio.h>
int main(){
    float num1,num2,num3,greatest_num;
    printf("\n Enter 3 number: ");
    scanf("%f %f %f", &num1,&num2,&num3);

    if (num1 > num2 && num1 > num3)
    {
        greatest_num = num1;
        printf("Greatest number: %f",greatest_num);
    }
    if (num2 > num1 && num2 > num3)
    {
        greatest_num = num2;
        printf("Greatest number: %f",greatest_num);
    }
    if (num3 > num1 && num3 > num2)
    {
        greatest_num = num3;
        printf("Greatest number: %f",greatest_num);
    }
    
    return 0;
}
