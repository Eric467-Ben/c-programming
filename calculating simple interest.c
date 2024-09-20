//Program to calculate Simple interest
#include<stdio.h>
int main(){
double principle_amount;
int rate;
int time;
float simple_interest;
printf("\nEnter the principle_amount: ",principle_amount);
scanf("%lf",&principle_amount);
printf("\nEnter the time: ",time);
scanf("%d",&time);
printf("\nEnter the rate: ",rate);
scanf("%d",&rate);
//calculation of simple interest
simple_interest=principle_amount*time*rate/100;
printf("\nThe simple interest is:%.3f ",simple_interest);
return 0;
}