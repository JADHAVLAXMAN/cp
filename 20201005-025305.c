// Shift inputed data by two bits to the left.

#include<stdio.h>
void main(){
   int x,y;
   printf("Read the integer from keyboard :-");
   scanf("%d",&x);
   x<<=2;//left shift operator
   y=x;
   printf("\n\aThe left shifted data is = %d",y);
 }