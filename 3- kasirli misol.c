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
    double U, k, y;
    
    printf("k=");
    scanf("%lf", &k);
    
    printf("y=");
    scanf("%lf", &y);
    
    //printf("x=");
    //scanf("%lf", &x);
    
    U = (log(k-y)+pow(y,4))/(exp(y)+(2.355*pow(k,2)));
    
    printf("U=%lf",U);
    
    return 0;
}
