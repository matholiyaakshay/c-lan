#include<stdio.h>

void table(int arr[][10] ,int n,int m ,int number);

int main()
{
    printf("to print table of 2 & 3");
    int arr[2][10];

    table(arr ,0,10,2);
    table(arr ,1,10,3);

    for(int j;j<10;j++)
        {
            printf("%d \t" , arr[0][j]);

        }
        printf("\n");

        for(int i;i<10;i++)
        {
            printf("%d \t" , arr[1][i]);

        }

    
}

void table(int arr[][10] ,int n,int m ,int number)
{
   
    for(int j=0;j<m;j++)
    {
       arr[0][j] = number * (j+1);
    }

    for(int i=0;i<m;i++)
    {
       arr[1][i] = number * (i+1);
    }

   
}