// cartesian coordinates to polar coordinates
 #include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    float r,deg;
    printf("\n Enter cartesian coordinates (x,y) = ");
    scanf("%d %d", &x,&y);

    r = sqrt( x * x + y * y);
    deg = atan(x/y);

    printf("Polar coordinates will be (r,deg) = %f , %f\n", r,deg);

    return 0;
} 



// detremine distance in nautical miles:

#include<stdio.h>
#include<math.h>

int main(){
    float L1,L2,G1,G2,D,value1,value2,result;

    printf("\n Enter the latitude distance of two place on earth (L1,L2) in degree = ");
    scanf("%f %f",&L1,&L2);
    printf("\n Enter the longitude distance of two place on earth (G1,G2) in degree =  ");
    scanf("%f %f",&G1,&G2);

    value1 = (sin(L1) * sin(L2) + cos(L1)* cos(L2));
    value2 = cos (G1 + G2);
    result = value1 * value2;
    D = 3963 * acos(result);

    printf("The distance will be %f nautical miles", D);

    return 0;
} 



// Wind-chill-factor calculation
#include <stdio.h>
#include <math.h>

int main(){
    int t,v;
    float sqr_v,wcf;

    printf("\n Enter the value of Temperature =  \n");
    scanf("%d",&t);
    printf("\n Enter value of velocity= \n");
    scanf("%d",&v);

    sqr_v = pow(v,0.16);
    wcf = 35.74 + 0.6215 * t + (0.4275 * t -35.75) * sqr_v;

    printf("The value of temperature & velocity is = %d & %d \n", t,v);
    printf("The wind chill temperature is = %f", wcf);

    return 0;
} 




// print all the trigonmetric ratio
#include <stdio.h>
#include <math.h>

int main(){
    float degree,radian,pi=3.1416;
    printf("\n Enter the degree for all the trigonmetric ratio: ");
    scanf("%f", &degree);
    radian = degree * (pi/180.00);

    printf("Sin(%f) = %f\n", degree, sin(radian));
    printf("Cos(%f) = %f\n", degree, sin(radian));
    printf("Tan(%f) = %f\n", degree, tan(radian));
    printf("Cosec(%f) = %f\n", degree, 1/ sin(radian));
    printf("Sec(%f) = %f\n", degree, 1/cos(radian));
    printf("Cot(%f) = %f\n", degree, 1/tan(radian));

    return 0; 
}
