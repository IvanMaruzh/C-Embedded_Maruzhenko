#include <stdio.h>

int main() {

    const int size = 1000;
    char string[size];
    
    printf("Enter the string: ");
    fgets(string, size, stdin);

    printf("\nResult:\n");

    for (int i = 0; string[i] != '\0'; i++) {
        printf("%c%c", string[i], string[i]);
    }

    return 0;
}
