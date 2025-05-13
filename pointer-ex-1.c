#include<stdio.h>

int main()
{
    int i=5;
    int *ptr=&i;  //use * for value and use & for address
    int **pptr=&ptr;

    int _i=**pptr;

printf("%d" , i);
return 0;

}