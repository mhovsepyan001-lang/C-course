#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000  
#define MAX_LEN 1000   

int main(int argc, char *argv[]) {
    int n = 10;  // default number of lines

    // if the user wrote something like "-5"
    if (argc == 2 && argv[1][0] == '-') {
        n = atoi(argv[1] + 1);  // convert "5" to integer 5
    }

    char lines[MAX_LINES][MAX_LEN];
    int count = 0; 

    // Read lines until end of input
    while (fgets(lines[count], MAX_LEN, stdin) != NULL) {
        count++;
        if (count >= MAX_LINES) break; // stop if too many lines
    }

    // If user asked more lines than exist
    if (n > count) n = count;

    // Print only last n lines
    for (int i = count - n; i < count; i++) {
        printf("%s", lines[i]);
    }

    return 0;
}

