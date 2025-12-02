#include <stdio.h>
#include <stdlib.h>
#include "../include/book.h"

void menu() {
    printf("\n===== Library Management =====\n");
    printf("1. Add Book\n");
    printf("2. Display Books\n");
    printf("3. Search by ID\n");
    printf("4. Search by Title\n");
    printf("5. Issue Book\n");
    printf("6. Return Book\n");
    printf("7. Delete Book\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

int main() {
    int choice;
    // ensure data file exists
    FILE *fp = fopen("library.dat", "ab+");
    if (fp) fclose(fp);

    while (1) {
        menu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }
        switch (choice) {
            case 1: add_book(); break;
            case 2: display_books(); break;
            case 3: search_book_by_id(); break;
            case 4: search_book_by_title(); break;
            case 5: issue_book(); break;
            case 6: return_book(); break;
            case 7: delete_book(); break;
            case 0: printf("Goodbye!\n"); exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
