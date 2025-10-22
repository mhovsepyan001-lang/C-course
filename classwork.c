
/* Create a C program that demonstrates passing pointers to 
functions. Write a function that accepts an integer pointer and 
doubles the value it points to. Display the result in the main 
function.
*/
#include <stdio.h>        
int double_value(int, *num){
	printf("The addres        double_value(&my_num); of num is: %p\n", &num);
	printf("The value of num is %p\n", &num);
	*num *= 2;
}
int main(int argc, char **argv){
	int my_num;	
	scanf("%d", &my_num);
	printf("The value read is: %d\n", my_num);
	double_value(&my_num);
	printf("The doubled value is: %d\n", my_num);
	return 0;

}
