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
    double R, y,k;
    
    printf("y=");
    scanf("%lf=", &y);
    
    printf("k=");
    scanf("%lf=", &k);
    
    //printf("t=");
    //scanf("%lf=", &y);
    
    R = (sqrt(pow(sin(y),2)+6.835))/(log(y+k)+3*pow(y,2));
    
    printf("R=%lf", R);

    return 0;
}
