//C file handling : writing to a file
#include<stdio.h>//scanf
#include<stdlib.h>//exit()


int main(){
int number;
FILE *fptr; //declare pointer

fptr=fopen("C:\\Users\\Holy Stein\\Documents\\C program\\sample.text","r");
if (fptr==NULL){
printf("Error opening the File");
exit(1);
}
printf("Enter a random number:");
scanf("%d",&number);

fprintf(fptr,"The number entered is %d",number);
fscanf(fptr,"%d",&number);
fclose(fptr);
printf("Number read successfuly");

return 0;
}
