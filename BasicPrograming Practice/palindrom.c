#include<stdio.h>
int main(){
    int num,rem,orig,rev=0;
    printf("enter a number:");
    scanf("%d",&num);
    orig=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num /=10;
    }
    if(orig==rev)
    printf("%d is polyndrom number.\n",orig);
    else
    printf("%d is not a polyndrom number.\n",orig);
    return 0;
}