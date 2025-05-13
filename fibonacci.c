#include<stdio.h>

int fibonacci( int n);

int main()
{
    int n;
    printf("enter term :");
    scanf("%d" , &n);

    fibonacci(n-1);
    printf("%d" ,fibonacci(n-1));

}

int fibonacci(int n)
{
    
    if(n==0)
    {
        return 0;

    }
    if(n==1) 
    {
        return 1;
    }
   int fibonaciim1 = fibonacci(n-1);
   int fibonaciim2= fibonacci(n-2);
   int fibonacci= fibonaciim1 +fibonaciim2;

   return fibonacci;
}


