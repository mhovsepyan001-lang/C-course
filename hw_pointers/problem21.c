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
		putchar(*p );
		putchar(' ');       
		//exactly the same as printf("%c", *p) but faster//
		p++;
	}

	printf("\n");
	return 0;
	
}
