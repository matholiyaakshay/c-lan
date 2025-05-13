#include <stdio.h>
/*int factorial(int number)
{
    if (number ==1   number ==0)
    {
        return 1;
    }
}
else{
    return( number *factorial(number-1));
    }
}
int main()
{
    int num;
    printf("enter the number you want the factorial of \n");
    scanf("%d" , &num);
    printf("the factorial of %d is %d" , num , factorial(num));

 return 0;
} */

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d" , &a);

// a!= a*(a-1)*(a-2)*.....................1
int n=a;
for(a>1,a=(a-1);)
 {    
     n= n * (a-1);
 }
 printf("%d" , n);
}
