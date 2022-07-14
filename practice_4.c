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
        printf("\n This is right angled triangle because a(sqr) = b(sqr) + c(sqr)");
    }
    
    return 0;
}