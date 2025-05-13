#include<stdio.h>
int main()
{
    int prize=33;
    int *ptr = &prize;
    int **pptr = &ptr; 
    int _prize= **pptr;

printf("%d\n" ,prize);
printf("%d\n" ,&prize);
printf("%d\n" ,ptr);

printf("%u\n" , &ptr);
printf("%d \n" ,*ptr);

    printf("%d \n" ,_prize);
    return 0;
}