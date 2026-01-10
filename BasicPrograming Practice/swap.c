#include<stdio.h>

int main()
{
   int a,b,t;
   // variables't'for a temporerlyuse.
   printf("enter values of'A'and 'B'=");
   scanf("%d%d",&a,&b);
   t=a;
   a=b;
   b=t;
   printf("A=%d,B=%d",a,b);
}