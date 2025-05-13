#include<stdio.h>
#include<conio.h>
#include<math.h>

void son(int n);

int main()
{  
    int n; 
    printf("enter a number :");
    scanf("%d" ,&n);
    son(n);
}



void son(int n)
{
    n= pow(n,2);
    printf("square of number is :%d" ,n);
}