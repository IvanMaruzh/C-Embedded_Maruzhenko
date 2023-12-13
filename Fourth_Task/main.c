#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure representing a book
struct Book {
    char title[100];
    float price;
    int pages;
    char language[50];
    float weight;
    int year;
    struct Book* next;
};

// Function to initialize a new book
struct Book* createBook(const char* title, float price, int pages, const char* language, float weight, int year) {
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));
    
    if (newBook != NULL) {
        strncpy(newBook->title, title, sizeof(newBook->title) - 1);
        newBook->price = price;
        newBook->pages = pages;
        strncpy(newBook->language, language, sizeof(newBook->language) - 1);
        newBook->weight = weight;
        newBook->year = year;
        newBook->next = NULL;
    }

    return newBook;
}

// Function to print information about a book
void printBookInfo(struct Book* book) {
    printf("Title: %s\n", book->title);
    printf("Price: $%.2f\n", book->price);
    printf("Number of Pages: %d\n", book->pages);
    printf("Language: %s\n", book->language);
    printf("Weight: %.2f kg\n", book->weight);
    printf("Year of Publication: %d\n", book->year);
    printf("\n");
}

int main() {
    // Creating the first book using the constructor
    struct Book* firstBook = createBook("Harry Potter and the Sorcerer’s Stone", 29.99, 320, "English", 1.1, 1997);

    // Creating the second book using the constructor
    struct Book* secondBook = createBook("Harry Potter and the Chamber of Secrets", 34.99, 352, "English", 1.2, 1998);

    // Creating the third book using the constructor
    struct Book* thirdBook = createBook("Harry Potter and the Prisoner of Azkaban", 39.99, 416, "English", 1.3, 1999);

    // Creating the fourth book using the constructor
    struct Book* fourthBook = createBook("Harry Potter and the Goblet of Fire", 44.99, 608, "English", 1.4, 2000);

    // Creating the fifth book using the constructor
    struct Book* fifthBook = createBook("Harry Potter and the Order of the Phoenix", 49.99, 870, "English", 1.5, 2003);

    // Creating the sixth book using the constructor
    struct Book* sixthBook = createBook("Harry Potter and the Half-Blood Prince", 54.99, 652, "English", 1.6, 2005);

    // Creating the seventh book using the constructor
    struct Book* seventhBook = createBook("Harry Potter and the Deathly Hallows", 59.99, 784, "English", 1.7, 2007);

    // Creating the eighth book using the constructor
    struct Book* eighthBook = createBook("Harry Potter and the Cursed Child", 19.99, 320, "English", 1.1, 2016);

    // Linking the books in a linked list
    if (firstBook != NULL && secondBook != NULL && thirdBook != NULL && fourthBook != NULL &&
        fifthBook != NULL && sixthBook != NULL && seventhBook != NULL && eighthBook != NULL) {
        firstBook->next = secondBook;
        secondBook->next = thirdBook;
        thirdBook->next = fourthBook;
        fourthBook->next = fifthBook;
        fifthBook->next = sixthBook;
        sixthBook->next = seventhBook;
        seventhBook->next = eighthBook;

        // Printing information about each book in the list
        struct Book* currentBook = firstBook;
        while (currentBook != NULL) {
            printBookInfo(currentBook);
            currentBook = currentBook->next;
        }

        // Freeing memory
        free(firstBook);
        free(secondBook);
        free(thirdBook);
        free(fourthBook);
        free(fifthBook);
        free(sixthBook);
        free(seventhBook);
        free(eighthBook);
    }

    return 0;
}
