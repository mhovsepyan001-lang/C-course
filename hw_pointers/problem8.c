#include <stdio.h>
#include <string.h>

void changePosition(char *a, char *b){
	char temp = *a;
	*a = *b;
	*b = temp;

}
void permulations(char *word, int start, int end){
	if (start == end){
		printf("%s  ", word);
	}
	else{
		for (int i = start; i <= end; i++){
			changePosition(&word[start], &word[i]);
			permulations(word, start + 1, end);
			changePosition(&word[start], &word[i]);}
	}
}

int main(){
	char word[100];
	printf("Enter the string: ");
	scanf("%s  ", word);
	printf("\nThe permulations of this string are:\n\n");

	int length = strlen(word);
	permulations(word, 0, length - 1);

	printf("\n");
	return 0;

  }
