#include<stdio.h>
 
 int main()
 {  int n,ld;
    printf("enter a number :");
    scanf("%d", &n);
 int sum=0;
     
     while(n!=0)
     {  ld=n%10;
        sum=sum+ld;
        n=n/10;
        }


   printf("the sum of digits are %d" , sum);
  return 0;
 }
