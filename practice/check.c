// write a program to check  the number is positive or negative.
#include<stdio.h>
int main()
 {
    int num;

      printf("enter any number:");
      scanf("%d",&num);

     if(num>0)
     {
        printf("enter number is positive");
    }
    else if(num<0)
    {
        printf("enter number is negative");
    }
    else{
        printf("enter number is zero ");
    }
    return 0;
    }