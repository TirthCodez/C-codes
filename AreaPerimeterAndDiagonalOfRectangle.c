#include <stdio.h>
#include <math.h>
int main ()
{
    float peri, area, diag, l, b;
    
    printf("Enter the Length of Rectangle: ");
    scanf("%f",&l);
    printf("Enter the Breadth of Rectangle: ");
    scanf("%f",&b);

    peri = 2*(l+b);
    area = l*b;
    diag = sqrt(l*l+b*b);

    printf("Perimeter of Given Ractangle is: %.10f\n",peri);
    printf("Area of Given Ractangle is: %.10f\n",area);
    printf("Diagonal of Given Ractangle is: %.10f",diag);
    
    return 0;
}