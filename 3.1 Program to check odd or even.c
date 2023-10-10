#include<stdio.h>
void main ()
{
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    b=a%2;
    if (b==0)
    {
        printf("It is even",a);
    } 
    else { printf("It is odd",a);}
}
