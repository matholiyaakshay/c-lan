#include <stdio.h>

void circle(int r);
void squre(int l);
void rectangle(int l, int w);

int main()
{
    int r, l, w, h;
    printf("enter value of radius of circle :");
    scanf("%d", &r);

    circle(r);

    printf("enter value of length of squre:");
    scanf("%d", &l);
    squre(l);
    printf("enter value of length of rectangle :");
    scanf("%d", &h);
    printf("enter value of width of rectangle :");
    scanf("%d", &w);
    rectangle(h, w);
}

void circle(int r)
{
    float area;
    area = 3.14 * r * r;
    printf("area of circle: %f\n", area);
}
void squre(int l)
{
    float area;
    area = l * l;
    printf("area of squre: %f\n", area);
}
void rectangle(int l, int w)
{
    float area;
    area = l * w;
    printf("area of rectangle: %f\n", area);
}
