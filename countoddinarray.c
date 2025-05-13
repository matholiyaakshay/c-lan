#include<stdio.h>

int countodd(int arr[10] ,int n );

int main()
{
    int nums[10];
    printf("enter 1:");
    scanf("%d\n" , &nums[0] );
    printf("enter 2:");
    scanf("%d\n" , &nums[1] );
    printf("enter 3:");
    scanf("%d\n" , &nums[2] );
    printf("enter 4:");
    scanf("%d\n" , &nums[3] );
    printf("enter 5:");
    scanf("%d\n" , &nums[4] );
    printf("enter 6:");
    scanf("%d\n" , &nums[5] );
    printf("enter 7:");
    scanf("%d\n" , &nums[6] );
    printf("enter 8:");
    scanf("%d\n" , &nums[7] );
    printf("enter 9:");
    scanf("%d\n" , &nums[8] );
    printf("enter 10:");
    scanf("%d\n" , &nums[9] );


    printf("number of odd :%d" ,countodd(nums ,10));
  
    return 0;


    
}
int countodd(int arr[10] ,int n)
{
    int count =0;
    for( int i=0 ; i<10 ; i++)
    {
           if(arr[i] %2 !=0 )
           {
            count =count +1 ;
           }

    }
    return count;
}