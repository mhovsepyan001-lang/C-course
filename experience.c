#include <stdio.h>
int main(){
	


	int c;
	printf("enter a text:(ctrl + z in windows) /n");
	while ((c = getchar()) != EOF){
		putchar(c);
	}
	return 0;

  /*
        //int age;
        float height;
        printf("enter your age and height: " );
        scanf("%d,%f", &age, &height);
        printf("I am %d years, %.2f meters",age, height);
        return 0;
        */





}


