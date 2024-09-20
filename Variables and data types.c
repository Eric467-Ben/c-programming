//variables and data types 
#include<stdio.h>
int main(){
    char a;
    char name[]={};
    int age;
    float area;
    double salary;
    printf("\nEnter  the character: ");
    scanf("%c",&a);
    printf("Character is: %c",a);
    
    printf("\nEnter your name: ");
    scanf("%s",&name);
    printf("The string is:%s",name);
    
    printf("\nEnter your age: ");
    scanf("%d",&age);
    printf("The age is:%dyrs",age);
    
 printf("\nEnter the area: ");
    scanf("%f",&area);
    printf("The area is:%.2fmetres squared",area);
    
    printf("\nEnter your salary: ");
    scanf("%lf",&salary);
    printf("The salary is:%.2lfkenyan shilling '",salary);
    

    return 0;
}