#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50];  // array to store names
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // remove the leftover newline

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        int len = strlen(names[i]);        // find the length of the string
	if (names[i][len - 1] == '\n') {
		names[i][len - 1] = '\0';}
    }

    printf("\nDuplicate names are:\n");
    for (i = 0; i < n; i++) {
        char *p1 = names[i];  // pointer to first name
        for (j = i + 1; j < n; j++) {
            char *p2 = names[j];  // pointer to second name

            if (strcmp(p1, p2) == 0) {  // compare using pointer variables
                printf("%s\n", p1);
                break; // avoid printing the same name multiple times
            }
        }
    }

    return 0;
}

