#include<stdio.h>

int factorial( int n);

int main()
{
    int n;
    printf("enter a num:");
    scanf("%d" ,&n);
    factorial (n);
    printf("factorial:%d" ,factorial(n));

}

int factorial(int n)
{
    
    if (n==1)
    {
        return 1;
    }
      
     int factorialm1= factorial(n-1);
     int factorial= factorialm1 * n;

    return factorial;
}
