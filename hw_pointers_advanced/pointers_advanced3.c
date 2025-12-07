#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000  
#define MAX_LEN 1000   

int main(int argc, char *argv[]) {
    int n = 10; 
    if (argc == 2 && argv[1][0] == '-') {
        n = atoi(argv[1] + 1);
    }

    char lines[MAX_LINES][MAX_LEN];
    int count = 0; 

    while (fgets(lines[count], MAX_LEN, stdin) != NULL) {
        count++;
        if (count >= MAX_LINES) break; 
    }

    if (n > count) n = count;

    for (int i = count - n; i < count; i++) {
        printf("%s", lines[i]);
    }

    return 0;
}

