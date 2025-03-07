/*
2. Let us work on the menu of a library. Create a structure containing book information
like accession number, name of author, book title and flag to know whether book is
issued or not.
Create a menu in which the following can be done.
1 - Display book information
2 - Add a new book
3 - Display all the books in the library of a particular author
4 - Display the number of books of a particular title
5 - Display the total number of books in the library
6 - Issue a book
(If we issue a book, then its number gets decreased by 1 and if we add a book, its
number gets increased by 1) 
*/
#include <stdio.h>
#include <string.h>

// Define structure
struct Book {
    int accession_number;
    char title[50];
    char author[50];
    int is_issued;  // 1 = Issued, 0 = Available
    int copies;     // Number of copies available
};

// Function to display all books
void displayBooks(struct Book books[], int count) {
    printf("\nLibrary Books:\n");
    for (int i = 0; i < count; i++) {
        printf("Accession No: %d, Title: %s, Author: %s, Copies: %d, Status: %s\n",
               books[i].accession_number, books[i].title, books[i].author, 
               books[i].copies, books[i].is_issued ? "Issued" : "Available");
    }
}

// Function to add a new book
void addBook(struct Book books[], int *count) {
    printf("Enter Accession No, Title, Author, and Number of Copies: ");
    scanf("%d %s %s %d", &books[*count].accession_number, books[*count].title, books[*count].author, &books[*count].copies);
    books[*count].is_issued = 0; // Initially available
    (*count)++;
}

// Function to display books by an author
void displayByAuthor(struct Book books[], int count) {
    char author[50];
    printf("Enter Author Name: ");
    scanf("%s", author);

    printf("\nBooks by %s:\n", author);
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("Title: %s, Copies: %d\n", books[i].title, books[i].copies);
        }
    }
}

// Function to count books of a particular title
void countByTitle(struct Book books[], int count) {
    char title[50];
    printf("Enter Book Title: ");
    scanf("%s", title);

    int totalCopies = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            totalCopies += books[i].copies;
        }
    }
    printf("\nTotal Copies of '%s': %d\n", title, totalCopies);
}

// Function to count total books
void totalBooks(struct Book books[], int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += books[i].copies;
    }
    printf("\nTotal Books in Library: %d\n", total);
}

// Function to issue a book
void issueBook(struct Book books[], int count) {
    int acc_no;
    printf("Enter Accession Number of Book to Issue: ");
    scanf("%d", &acc_no);

    for (int i = 0; i < count; i++) {
        if (books[i].accession_number == acc_no) {
            if (books[i].copies > 0) {
                books[i].copies--;
                books[i].is_issued = 1;
                printf("Book Issued Successfully!\n");
            } else {
                printf("No Copies Left to Issue!\n");
            }
            return;
        }
    }
    printf("Book Not Found!\n");
}

// Main function
int main() {
    struct Book books[100];
    int count = 0, choice;

    while (1) {
        printf("\nLibrary Menu:\n");
        printf("1. Display Book Information\n");
        printf("2. Add a New Book\n");
        printf("3. Display Books by an Author\n");
        printf("4. Count Books of a Particular Title\n");
        printf("5. Display Total Number of Books\n");
        printf("6. Issue a Book\n");
        printf("7. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayBooks(books, count);
                break;
            case 2:
                addBook(books, &count);
                break;
            case 3:
                displayByAuthor(books, count);
                break;
            case 4:
                countByTitle(books, count);
                break;
            case 5:
                totalBooks(books, count);
                break;
            case 6:
                issueBook(books, count);
                break;
            case 7:
                return 0;
            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}
