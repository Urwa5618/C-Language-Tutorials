#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Publisher{
    char name[15];
    int yearpublished;
}Publisher;
typedef struct Book{
    char title[15];
    char author[15];
    Publisher *p;
}Book;
int main(){
    int n;
    printf("Enter number of books:\n");
    scanf("%d",&n);
    Book **books = (Book**) malloc (n*sizeof(Book*));
    for (int  i = 0; i < n; i++)
    {
        books[i] = (Book*)malloc(sizeof(Book));
        books[i]->p = (Publisher*) malloc (sizeof(Publisher));
        printf("Book %d Title: ", i+1);
        fgets(books[i]->title,15,stdin);
        printf("Book %d Author: ", i+1);
        fgets(books[i]->author,15,stdin);

        printf("Publisher Name: ");
        fgets(books[i]->p->name,15,stdin);
        printf("Year Established: ");
        scanf("%d", &books[i]->p->yearpublished);
    }
    
    printf("\nLibrary Books:\n");
    for(int i = 0; i < n; i++) {
        printf("Book %d: %s by %s\n", i+1, books[i]->title, books[i]->author);
        printf("Publisher: %s, Established: %d\n\n", 
               books[i]->p->name, books[i]->p->yearpublished);
    }

    for(int i = 0; i < n; i++) {
        free(books[i]->p);  
        free(books[i]);    
    }
    free(books); 
    return 0;
}