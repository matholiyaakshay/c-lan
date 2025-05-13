#include<stdio.h>
int main()
{
    int a;

    printf("enter a number :")
    scanf("%d" , a);

    for(int i=1,i<a , i++)
    {
        for(int p=1,p<i;p++);
        printf("*");
        
    }
    return 0;
}
