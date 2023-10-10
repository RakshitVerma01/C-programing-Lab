#include <stdio.h>
void main(){
    int L,b;
    printf("enter the value of length of rectangle:");
    scanf("%d",&L);
printf("enter the value of breadth of rectangle:");
scanf("%d",&b);
int side;
printf("\n enter the value of side of square:");
scanf("%d",&side);
float radius;
printf("\nenter the value of radius of circle:");
scanf("%f",&radius);

printf("\n perimeter of circle:%f",2*3.14*radius);
printf("\n area of circle:%f",3.14*radius*radius);
printf("\n perimeter of square:%d",4*side);
printf("\n area of square:%d",side*side);
printf("\n perimeter of rectange:%d",2*(L+b));
printf("\n area of rectangle:%d",L*b);





}