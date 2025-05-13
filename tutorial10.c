 #include<stdio.h>
 int main()
 {  int a;
    printf("which exam you will pass:\n ");
    printf("1. maths \n");
    printf("2. science \n");
    printf("3. maths & science \n");
 
   printf("enter a just number that exam you will pass:");
   scanf("%d" , &a);

   if (a==1)
   { printf("you will pass maths`s exam so you will get gift of $15 " );}

   else if(a==2)
   {printf("you will pass science exam so you will get gift of $15 "); }

   else if(a==3)
   {
   printf( "you will pass maths & science exam so you will get gift of $45") ;
   } 

   else
   { printf("write 1,2 or 3 olny ") ;} 

   

 }