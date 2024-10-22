//C structures 
//C program to define a structure named book
#include<stdio.h>
#include<string.h>
struct book{
    char Title[30];
    char Author[30];
    int Publication_year;
    char ISBN[13];
    float Price;
}book1,book2;
int main(){
    strcpy(book1.Title,"Introduction to C progrmming");
    strcpy(book1.Author,"John smith");
    strcpy(book1.ISBN,"9780131103627");
    book1.Publication_year=2022;
    book1.Price=49.99;
    
    printf("\nTitle:%s",book1.Title);
    printf("\nAuthor:%s",book1.Author);
    printf("\nISBN:%s",book1.ISBN);
    printf("\nPublication_year:%d",book1.Publication_year);
    printf("\nPrice:%.2f",book1.Price);
    
    return 0;

}