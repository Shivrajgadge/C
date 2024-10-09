#include<stdio.h>
int main()
{
    int radius,dimeter;
    float area,perimeter;
    printf("enter reduce");
    scanf("%d",&radius);
    dimeter=2*radius;
    perimeter=2*3.14*radius;
    area=3.14*radius*radius;
    printf("dimeter=%f\nperment=%f\narea=%f" ,dimeter,perimeter,area);
}