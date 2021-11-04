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
    double D, a, t, y, e;
    
    printf("a=");
    scanf("%lf", &a);
    
    printf("t=");
    scanf("%lf", &t);
    
    printf("y=");
    scanf("%lf", &y);
    
    printf("e=");
    scanf("%lf" , &e);
    
    D = ((7.8*pow(a,2))+ 3.52*t)/(log(a+2*y)+exp(y));
    
    printf("D=%lf",D);
    
    return 0;
}
