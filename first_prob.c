// practice problem of let us c 1st chapter
// problem 1.1
 #include<stdio.h>

int main(){
    float bs,da,hra,gs;
    printf("\nEnter the salary of Ramesh: ");
    scanf("%f",&bs);
    da = bs * 0.4;
    hra = bs * 0.2;
    gs = bs + da + hra ;

    printf("Basic salary of Ramesh = %f\n",bs);
    printf("Dearness allowances =%f\n",da);
    printf("Home allowances = %f\n",hra);
    printf("Ramesh's Gross salary = %f\n",gs);
    return 0;
} 


// problem 1.2
#include<stdio.h>

int main(){
    float meter,feet,inche,centi,distance;
    printf("\nEnter the distance between kolkata & Dhaka in Kilometers: ");
    scanf("%f",&distance);
    meter = distance * 1000;
    feet = distance * 3281;
    inche = distance * 39370;
    centi = distance * 100000;

    printf("After convert the distance into meters = %f\n",meter);
    printf("after convert the distance into feet = %f\n",feet);
    printf("After convert the distance into inches = %f\n",inche);
    printf("After convert the distance in centimeters = %f\n",centi);

    return 0;
}


// problem 1.3
#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5,agg_m;
    float perc_m;
    printf("\nEnter 5 obtained marks in different subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    agg_m = m1+ m2 + m3 + m4 + m5;
    perc_m = agg_m / 5;

    printf("Aggregate marks obtained by the student = %d\n",agg_m);
    printf("Percentage marks obtained by the student = %f\n",perc_m);
    return 0;
}

