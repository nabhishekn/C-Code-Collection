/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
struct booklib{
    char book_name[30];
    char book_author[30];
    int pub_year;
    };
    
    
int main()
{
    struct booklib book_library[2];
    int i;
    char search_author_name[30];
    
    for (i = 0; i < 2; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        
        printf("Book Name: ");
        scanf(" %[^\n]", book_library[i].book_name);  
        
        printf("Book Author: ");
        scanf(" %[^\n]", book_library[i].book_author);  
        
        printf("Publication Year: ");
        scanf("%d", &book_library[i].pub_year);
    }
    
    printf("Enter author name to search in library: ");
    scanf(" %[^\n]", search_author_name);
    
    for(i=0; i<2; i++)
    {
        if(strcmp(book_library[i].book_author, search_author_name)==0)
        {
            printf("%s, %s, %d\n", book_library[i].book_name, book_library[i].book_author, book_library[i].pub_year);
        }
    }    

    return 0;
}