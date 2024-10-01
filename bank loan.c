//Bank loan
#include <stdio.h>
int main (){
    int age,income;
    
    printf("\nEnter your age and income: ");
    scanf("%d%d",&age,&income);
     
     if (age>=21 &&income>21000){
         printf("congratulations you qualify for a loan");
     }
     else{
         printf("you dont qualify for a loan");
         return 0;
     }
}