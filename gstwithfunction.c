#include<stdio.h>

void calGst(float value);

int main()
 {     float prize;
       printf("enter your prize:");
       scanf("%f" ,&prize);

       calGst(prize);
 }

 void calGst(float value)
 {
    value = value + (0.18* value);
    printf("prize with GST is : %f\n" ,value);
 }