/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    double H, y,n;
    
    printf("y=");
    scanf("%lf=", &y);
    
    printf("n=");
    scanf("%lf=", &n);
    
    //printf("t=");
    //scanf("%lf=", &y);
    
    H = (pow(y,2)-0.8*y+sqrt(y))/((23.1*pow(n,2))+cos(n));
    
    printf("H=%lf", H);

    return 0;
}
