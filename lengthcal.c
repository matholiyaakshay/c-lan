#include<stdio.h>


int countLengh(char arr[]);

int main()
{
    char username[100] ;
    fgets(username ,100, stdin);
    printf("length is :%d" ,countLengh(username)) ;
    
}

int countLengh(char arr[])
{
    int count =0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}

