#include<stdio.h>
 int main()
 {  int n;
    printf("enter a number :");
    scanf("%d" , &n);

    for( int i=2; i<= n-1; i++)
   { if (n%i==0)
     {
        printf("this number is not prime number\n");
        return 0;
     }  
    
    else {
        printf("this number is prime\n");
        return 0;
    }

   }
 }