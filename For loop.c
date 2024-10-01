//For loop 
#include<stdio.h>
int main (){
    int i,sum;
    
    for(i=1; i<11; i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum:%d",sum);
    return 0;
}