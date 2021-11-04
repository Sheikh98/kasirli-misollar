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
    double E, y,q;
    
    printf("y=");
    scanf("%lf=", &y);
    
    printf("q=");
    scanf("%lf=", &q);
    
    //printf("t=");
    //scanf("%lf=", &y);
    
    E = (log(0.7*y+2*q))/(sqrt((3*pow(y,2))+0.5*y+4));
    
    printf("E=%lf", E);

    return 0;
}
