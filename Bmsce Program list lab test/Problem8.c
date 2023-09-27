// Develop a C program to read and print three book details (i.e. Book Title, Author, Price,
// number of pages, date of publication). Also print the Book details with the highest price.
#include<stdio.h>

int main(){
    struct book{
        char author[50];
        char title[50];
        float price;
        int number_of_pages;
        char date_of_publication[50];


    }book1,book2,book3;
    printf("Enter the book1 details: Author,Title,Price,Number of pages,Date of publication\n");

    scanf("%s%s%f%d%s",book1.author,book1.title,&book1.price,&book1.number_of_pages,book1.date_of_publication);

     printf("Enter the book2 details: Author,Title,Price,Number of pages,Date of publication\n");

    scanf("%s%s%f%d%s",book2.author,book2.title,&book2.price,&book2.number_of_pages,book2.date_of_publication);

     printf("Enter the book3 details: Author,Title,Price,Number of pages,Date of publication\n");

    scanf("%s%s%f%d%s",book3.author,book3.title,&book3.price,&book3.number_of_pages,book3.date_of_publication);

    if(book1.price>=book2.price && book1.price >= book3.price){
        printf("Book1 has the highest price : Its details are : \n Author = %s\n Title = %s\n Price = %f\n Number of pages = %d\n Date of publication = %s\n",book1.author,book1.title,book1.price,book1.number_of_pages,book1.date_of_publication);

    }
    else if(book2.price>=book1.price && book2.price >= book3.price){
        printf("Book2 has the highest price : Its details are : \n Author = %s\n Title = %s\n Price = %f\n Number of pages = %d\n Date of publication = %s\n",book2.author,book2.title,book2.price,book2.number_of_pages,book2.date_of_publication);
        
    }
    else{
        printf("Book3 has the highest price : Its details are : \n Author = %s\n Title = %s\n Price = %f\n Number of pages = %d\n Date of publication = %s\n",book3.author,book3.title,book3.price,book3.number_of_pages,book3.date_of_publication);
        
    }

    return 0;
}