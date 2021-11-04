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
    double W, t,r, y;
    
    printf("t=");
    scanf("%lf=", &t);
    
    printf("y=");
    scanf("%lf=", &r);
    
    printf("t=");
    scanf("%lf=", &y);
    
    W = ((4*pow(t,3))+log(r))/(exp(y+r)+7.2*sin (r));
    
    printf("W=%lf", W);

    return 0;
}
