#include<stdio.h>

int main(){
    int principle_amount,time,rate;
    printf("Enter the principle amount:\n");
    scanf("%d",&principle_amount);
    printf("Enter the actual time in year:\n");
    scanf("%d",&time);
    printf("Enter the cuting persentage (without using persentage mark):"); 
    scanf("%d",&rate);
    int simpleintrest=(principle_amount*time*rate)/100;
    printf("%d",&simpleintrest);
       return 0;
}