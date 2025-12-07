#include <stdio.h>
int main(){
	char alph[27];

	for (int i; i < 26; i++){
		alph[i] = 'A' + i;

	}
	alph[26] = '\0';
	char *p = alph;
	printf("The alphabet is:  ");
	while(*p != '\0'){
		printf("%c", *p);
		p++;
	}

	printf("\n");
	return 0;
	
}
