//  this is the find table for all numbers.

//  by using for loop

//  #include<stdio.h>
 
//  int main(){
//     int num;
//    printf("enter the number:");
//     scanf("%d", &num);
    
//     for (int i = 1; i <=10; i++)
//     {
//        printf("%d * %d=%d\n",num,i,num*i);

//    }
    
//     return 0;
//   }
 



 //by  do while loop



//  #include<stdio.h>
 
//  int main(){
//     int num,i=1;
//     printf("enter the number:");
//     scanf("%d", &num);
    
//     do
//     {
//       printf("%d * %d=%d\n",num,i,num*i);
//              i++;
//     } while (i<=10);
//     return 0;
//  }



 //by using while loop


//  #include<stdio.h>
 
//  int main(){
//     int num,i=1;
//     printf("enter the number:");
//     scanf("%d", &num);
    
//     while(i<=10)
//     {
//       printf("%d * %d=%d\n",num,i,num*i);
//              i++;
//     }
//     return 0;
//  }

// print reverse of table using user input
//  #include<stdio.h>
 
//  int main(){
//     int num;
//    printf("enter the number:");
//     scanf("%d", &num);
    
//     for (int i = 10; i; i--)
//     {
//        printf("%d * %d=%d\n",num,i,num*i);

//    }
    
//     return 0;
//   }

//by usin not user input
//  #include<stdio.h>
 
//  int main(){
//     int num=3;
//     for (int i = 10; i; i--)
//     {
//        printf("%d * %d=%d\n",num,i,num*i);

//    }
    
//     return 0;
//   }



// not by user input


//    #include<stdio.h>
 
//  int main(){
//     int num=4;
//     for (int i = 1; i<=10; i++)
//     {
//        printf("%d * %d=%d\n",num,i,num*i);

//    }
    
//     return 0;
//   }


// question on loop
// wap to sum of first ten natural numbers usin  loop.

//solve:
// #include<stdio.h>

// int main(){
//    int i=0,sum=0,n=10;
//    for(i=0;i<=n;i++){
//    sum +=i;
// }
//    printf("sum of first ten number is %d:" ,sum);
//    return 0;
// }
//ouput is 55


// wap to sum of first ten natural numbers usin while loop.

// #include<stdio.h>

// int main(){
//    int i=0,sum=0;
//    while(i<=10){
//    sum +=i;
//    i++;
// }
//    printf("sum of first ten number is %d:" ,sum);
//    return 0;
// }
//output is 55


// wap to sum of first ten natural numbers using do while loop.
//  #include<stdio.h>

// int main(){
//    int i=0,sum=0;
//    do{
//    sum +=i;
//    i++;
// }while(i<=10);
//    printf("sum of first ten number is %d:" ,sum);
//    return 0;
// }
//output is 55


 
// wap to find factorial of number by user input 


// #include<stdio.h>

// int main(){
//    int i=0,num,fact=1;
//    printf("enter a number:");
//    scanf("%d", &num);
//    for ( i = 1; i <=num; i++)
//    {
//       fact *=i;
//    }
//    printf("the value of factorial %d is %d", num, fact);
//    return 0;
// }


// wap to check the wheather number is prime or not

#include<stdio.h>

int main(){
   int i, num;
   printf("enter a number:");
   scanf("%d", &num);
  for ( i = 1; i<=num; i++)
  {
   if(num%i==0){
      printf("%d is not prime",num);
      break;
   }
   else{
      printf("%d is   prime",num);
      break;
   }
  }  
  
   return 0; 
}

