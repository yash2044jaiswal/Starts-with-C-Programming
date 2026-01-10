// write a program to check wheater an integer enterd by the user is odd or even.
#include<stdio.h>
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    // true if remainder is 0
    if (number%2==0 )
         printf("%d is an even number.",number);
     else
         printf("%d is an odd number.",number);
     return 0;    
    
}