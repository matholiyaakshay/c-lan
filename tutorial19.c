#include<stdio.h>
/*use of function key to devide the 
programme*/ 
int sum(int a,int b)
{
    return a+b;
}
int main()

{  int a,b,c;
 
  a=9;
  b=89;
  c= sum(a,b);
  printf("the sum is %d \n",c);
    return 0;
}