// Farenheit to centigrade

#include<stdio.h>

int main(){
    float in_f;
    float in_cen;
    printf("\nEnter the temperature of your city in Farenheit = ");
    scanf("%f", &in_f);

    in_cen = (in_f - 32) * 5/9 ;

    printf("Your city temperature in Farenheit is %f\n", in_f);
    printf("Your city temperature in Centigrade is %f\n", in_cen);

    return 0;
}


// rectangular & cercle problem

#include<stdio.h>

int main(){
    float length,breadth,radius,PI,area_rec,peri_rec,area_cercle,circum_cercle;
    PI = 3.1416;
    printf("\nEnter the length of your rectangle= ");
    printf("\nEnter the breadth of your rectangle= ");
    printf("\nEnter the radius of your cercle= ");

    scanf("%f %f %f", &length, &breadth, &radius);

    area_rec = length * breadth;
    peri_rec = 2 * (length + breadth);
    area_cercle = PI * (radius * radius);
    circum_cercle = 2 * PI * radius;

    printf("length of the rectangular = %f\n",length);
    printf("breadth of the rectangular = %f\n",breadth);
    printf("area of the rectangular = %f\n",area_rec);
    printf("perimeter of the rectangular = %f\n",peri_rec);
    printf("radius of the cercle = %f\n",radius);
    printf("area of the cercle = %f\n",area_cercle);
    printf("circumfrence of the cercle = %f\n",circum_cercle);

    return 0;

}


// paper problem solution

#include<stdio.h>

int main(){
    int A0_l,A0_b,A1_l,A1_b,A2_l,A2_b,A3_l,A3_b,A4_l,A4_b,A5_l,A5_b,A6_l,A6_b,A7_l,A7_b,A8_l,A8_b;

    A0_l = 1189;
    A0_b = 841;
    printf("The paper size of A0 is %d mm & %d mm\n", A0_l,A0_b);

    A1_l = A0_b;
    A1_b = A0_l / 2;
    printf("The paper size of A1 is %d mm & %d mm\n", A1_l,A1_b);

    A2_l = A1_b;
    A2_b = A1_l / 2;
    printf("The paper size of A2 is %d mm & %d mm\n", A2_l,A2_b);

    A3_l = A2_b;
    A3_b = A2_l / 2;
    printf("The paper size of A3 is %d mm & %d mm\n", A3_l,A3_b);

    A4_l = A3_b;
    A4_b = A3_l / 2;
    printf("The paper size of A4 is %d mm & %d mm\n", A4_l,A4_b);

    A5_l = A4_b;
    A5_b = A4_l / 2;
    printf("The paper size of A5 is %d mm & %d mm\n", A5_l,A5_b);

    A6_l = A5_b;
    A6_b = A5_l / 2;
    printf("The paper size of A6 is %d mm & %d mm\n", A6_l,A6_b);

    A7_l = A6_b;
    A7_b = A6_l / 2;
    printf("The paper size of A7 is %d mm & %d mm\n", A7_l,A7_b);

    A8_l = A7_b;
    A8_b = A7_l / 2;
    printf("The paper size of A8 is %d mm & %d mm\n", A8_l,A8_b);

    return 0;
}