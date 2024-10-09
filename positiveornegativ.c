#include<stdio.h>
int main()
{
    int n;
    printf("enter intager no:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is odd",n);
    }
    else
    {
        printf("%dis even",n);
    }
}