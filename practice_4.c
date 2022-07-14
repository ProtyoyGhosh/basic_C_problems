// check wheather the traingle is isoscales,equilateral,scalene,right-angled?
// isoscale = two equal sides, equilateral = all equal sides,
// scalene = none equal sides, right-angeled = (hy^2 = per^2 + base^2)
/*#include <stdio.h>
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
} */



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