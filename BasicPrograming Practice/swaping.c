#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("enter first number:\n");
    scanf("%d",&a);
    printf("enter second number:\n");
    scanf("%d",&b);
    printf("before swaping: a=%d,b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping: a=%d,b=%d",a,b);
    return 0;
}
//after running you may first enter a number and second number then defined output otherwise not defind//