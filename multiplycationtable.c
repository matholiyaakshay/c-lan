  #include<stdio.h>
 int main()
 
 {int a,b,c,d,e,f,g,h,i,j;
  printf("enter a number that you want to multiplication table:");
  scanf("%d" , &a);
   
printf("-----------------------------\n");

a = a*1 ;
b = a*2;
c = a*3;
d = a*4;
e = a*5;
f = a*6;
g = a*7;
h = a*8;
i = a*9;
j = a*10;


printf("%d x 1 =%d\n" , a , a);
printf("%d x 2 =%d\n" , a, b);
printf("%d x 3 =%d\n" , a, c);
printf("%d x 4 =%d\n" , a , d);
printf("%d x 5 =%d\n" , a , e);
printf("%d x 6 =%d\n" , a ,f);
printf("%d x 7 =%d\n" , a ,g);
printf("%d x 8 =%d\n" , a , h);
printf("%d x 9 =%d\n" , a , i);
printf("%d x 10 =%d\n" ,a , j);
 }/*
/int i=1;
for(i<=10; i++ ;)
{
  printf("%d x %d=%d \n" , a,i, a*i);

}
*/
    return 0;
    
 }
