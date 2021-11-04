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
    double W, y, f;
    
    printf("y=");
    scanf("%lf", &y);
    
    printf("f=");
    scanf("%lf", &f);
    
    //printf("x=");
    //scanf("%lf", &x);
    
    W = (exp(2*y)+sin(f))/(log(3.8*y+f));
    
    printf("W=%lf",W);
    
    return 0;
}
