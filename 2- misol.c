/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
//a va b butun sonlar berilgan(a<b). a va b sonlari orasidagi barcha butun -
//a va b ni ham chiqaruvchi va chiqarilgan sonlar sonini chiqaruchi dastur
int main(){
    int a, b, counter=0;
    printf("a ni kriting ");
    scanf("%d", &a);
    
    printf("b ni kriting ");
    scanf("%d", &b);

    for(int i=b; i>=a; i--){
        printf("\n %d ",i );
        counter++;
        
        
    }
    printf("chiqqan sonlar soni: %d\n", counter);
return 0;
}
