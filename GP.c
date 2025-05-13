#include<stdio.h>
 
 int main()
 {
    int q,r;
      printf("let's make an geometric progration (G.P.)\n");

    
    printf("common ratio(R) :");
    scanf("%d" , &q);

    printf("max. last term (Gn) :") ;
    scanf("%d" , &r);
   // make gp which is starting from 2 and common difference that you tall
    int a=2 ;
   for (int p=1; a<=r ; p++ )
   {
    printf("%d\n", a);
    a=a*q;

   }

   return 0;
 }