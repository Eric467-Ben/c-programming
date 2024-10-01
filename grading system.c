//PROGRAM TO IMPLEMENT A GRADING SYSTEM 
#include <stdio.h>
int main (){
    int basic_mathematics,computational_logic,structural_programming;
     int average;
    int A,B,C,D,E;
    //Enter the marks for the three subjects
    printf("marks for basic mathematics:");
    scanf("%d",&basic_mathematics);
    
    printf("marks for computational logic: ");
    scanf("%d",&computational_logic);
    
    printf("marks for structrual programming: ");
    scanf("%d",&structural_programming);
    
    //calculating the average
    average=(basic_mathematics+computational_logic+structural_programming)/3;
    printf("Your average is:%.d\n ",average);

//if else condition to determine the grade
    if (average >= 70 && average <= 100) {
        printf("Grade: A\n");
    } else if (average >= 60 && average < 70) {
        printf("Grade: B\n");
    } else if (average >= 50 && average < 60) {
        printf("Grade: C\n");
    } else if (average >= 40 && average < 50) {
        printf("Grade: D\n");
    } else if (average < 40) {
        printf("Grade: E (Fail)\n");
    } else {
        printf("Invalid marks entered.\n");}
        return 0;
    
}