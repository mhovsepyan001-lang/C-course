#include <stdio.h>

int main(){

	int n,m;
	printf("enter the number of rows and cols: ");
	scanf("%d,%d",&n,&m );

        int matrix[10][10];
	int sum1= 0;
	printf("enter the elements of matrix: \n");

	for (int i = 0; i<n;i++){
		for(int j = 0; j < m; j++){
			scanf("%d",&matrix[i][j]);
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (i==j){
				sum1+=matrix[i][j];
			}
		}
	}
	printf("the sum of the elements from the main diagonal is %d\n:",sum1);
	return 0;


}
