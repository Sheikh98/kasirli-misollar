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
    double G, w, y;
    
    printf("w=");
    scanf("%lf", &w);
    
    printf("y=");
    scanf("%lf", &y);
    
    //printf("x=");
    //scanf("%lf", &x);
    
    G = ((9.33*pow(w,3))+sqrt(w))/(log(y+3.5)+sqrt(y));
    
    printf("G=%lf",G);
    
    return 0;
}
