//write a program to check the number is even or odd bu using function calling
//this progaram is example of user define function 
#include<stdio.h>
int main(){
    evenodd();
    return 0;
}
void evenodd(){
    int num=9;
    if(num%2==0){
        printf("even");
    }else{
        printf("odd");
    }
}