// C structure
#include <stdio.h>
#include<string.h>
struct student{
  char name[30];
  float marks;
 long int phone;
  char email[30];
  int ID;
  char reg_no[17];
}student1,student2;
int main(){
    //or you can use struct student student1,student2;
    //initilizing our variable
    strcpy(student1.name,"Eric") ;
    strcpy(student1.reg_no,"BCS-05-0071/2024");
    strcpy(student1.email,"beneric467@gmail.com");
    student1.ID=41924835;
    student1.phone=798817761;
    student1.marks=80.6; 
    
    printf("Name: %s \n",student1.name);
    printf("Reg Number:%s \n",student1.reg_no);
    printf("Email:%s \n",student1.email);
    printf("ID Number:%d \n",student1.ID);
    printf("Phone Number :%d \n",student1.phone);
    printf("Marks:%.2f \n",student1.marks);
    
    return 0;
    
}


