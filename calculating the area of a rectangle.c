//finding the area of a Rectangle
#include<stdio.h>
int main(){
    printf("\nTo find the area of the Rectangle;");
    printf("\n");
  int length,width,area;
  printf("\nEnter the length(cm):",length);
  scanf("%d",&length);
  printf("\nEnter the width(cm):",width);
  scanf("%d",&width);
  //calculations starts here
  area=length*width;
  printf("\nThe area of the rectangle(cm squared)is:%d",area);
  return 0;
}