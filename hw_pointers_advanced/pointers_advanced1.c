#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50];  
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar();

    printf("Enter %d names:\n", n);
    for (i = 0; i < n; i++) {
        fgets(names[i], sizeof(names[i]), stdin);
        int len = strlen(names[i]);        
	if (names[i][len - 1] == '\n') {
		names[i][len - 1] = '\0';}
    }

    printf("\nDuplicate names are:\n");
    for (i = 0; i < n; i++) {
        char *p1 = names[i];
        for (j = i + 1; j < n; j++) {
            char *p2 = names[j]; 

            if (strcmp(p1, p2) == 0) { 
                printf("%s\n", p1);
                break; 
            }
        }
    }

    return 0;
}

