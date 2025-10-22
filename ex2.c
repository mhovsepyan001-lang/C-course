#include <stdio.h>
#include <string.h>

void Sum_Average(int *arr,  int size, int *sum, float *average){
	*sum = 0;
	for (int i = 0; i < size; i++){
		*sum += *(arr + i);

	}
	*average = (float) (*sum) / size;

}
int main (){
	int arr[5];
	int sum;
	float average;

	printf("enter 5 integers; ");
	for (int i = 0; i < 5; i++){
	
		scanf("%d ", (arr + i));
	}
	Sum_Average(arr, 5, &sum, &average);
	printf("print the sum = %d\n  ", sum);
	printf("print the average = %.2f\n", average);
	return 0;
}
