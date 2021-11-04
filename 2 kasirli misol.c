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
    double F,d, y;
    
    printf("d=");
    scanf("%lf", &d);
    
    printf("y=");
    scanf("%lf", &y);
    
    //printf("x=");
    //scanf("%lf", &x);
    
    F = log(d)+((3.5*pow(d,2))+1)/(cos (2*y));
    
    printf("F=%lf",F);
    
    return 0;
}
