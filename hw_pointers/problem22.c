#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];   
    char *pointer;       
    int length;

    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);

    // Remove newline character if present
    length = strlen(arr);
    if (arr[length - 1] == '\n') {
        arr[length - 1] = '\0';
        length--;
    }

    // Set pointer to point to the last character of the string
    pointer = arr + length - 1;

    printf("Reversed string: ");
    // Print characters in reverse using the pointer
    while (pointer >= arr) {
        printf("%c", *pointer); // Print the character pointed by pointer
        pointer--;              // Move pointer backward
    }
    printf("\n");

    return 0;
}
