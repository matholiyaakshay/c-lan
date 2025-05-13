#include<stdio.h>

int sumN(int n);

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d" ,&n);
    sumN(n);
    printf("sum =%d" ,sumN(n));
    



}


int sumN(int n)
{
    
    if(n==1)
    {
        return 1;
    }

        int sumNm1 = sumN(n-1) ;
       int  sumN = sumNm1 + n;


    return sumN;


}
