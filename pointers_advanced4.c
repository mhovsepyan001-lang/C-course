#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short our_strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

short is_less_or_equal(char *s1, char *s2) {
    return our_strcmp(s1, s2) <= 0;
}

short is_greater(char *s1, char *s2) {
    return our_strcmp(s1, s2) > 0;
}

void swap(char **a, char **b) {
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(char **str_arr, unsigned int size, short (*fn)(char *s1, char *s2)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (fn(str_arr[i], str_arr[j])) {
                swap(&str_arr[i], &str_arr[j]);
            }
        }
    }
}

int main(void) {
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    sort(months, 12, is_greater);
    printf("Sorted array (descending): ");
    for (int i = 0; i < 12; i++) printf("%s ", months[i]);
    printf("\n");

    sort(months, 12, is_less_or_equal);
    printf("Sorted array (ascending): ");
    for (int i = 0; i < 12; i++) printf("%s ", months[i]);
    printf("\n");

    return 0;
}
