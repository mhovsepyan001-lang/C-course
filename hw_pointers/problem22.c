#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];   
    char *pointer;       
    int length;

    printf("Enter a string: ");
    fgets(arr, sizeof(arr), stdin);

    length = strlen(arr);
    if (arr[length - 1] == '\n') {
        arr[length - 1] = '\0';
        length--;
    }

    pointer = arr + length - 1;

    printf("Reversed string: ");

    while (pointer >= arr) {
        printf("%c", *pointer); 
        pointer--;        
    }
    printf("\n");

    return 0;
}
