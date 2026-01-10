#include<stdio.h>
#include<conio.h>
int main(){
    int num1,num2,ops,add=0,sub=0,mul=0,div=0;
    printf("calculator-\n");
    printf("1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
    printf("enter two number:");
    scanf("%d\n%d",&num1,&num2);
    printf("select any opretion:");
    scanf("%d",&ops);
    switch(ops){
        case1:
        add=num1+num2;
        printf("add=%d",add);
        break;
        case2:
        sub=num1-num2;
        printf("sub=%d",sub);
        break;
        case3:
        mul=num1*num2;
        printf("mul=%d",mul);
        break;
        div=num1/num2;
        printf("div=%d",div);
        break;
        default:
        printf("indivadal input");
        break;
    }
    getch();
    return 0;
}
