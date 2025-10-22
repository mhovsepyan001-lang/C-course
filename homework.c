#include <stdio.h>
/*int main(){

	int a[25], i, n;
	printf("Input the number of elements in the array :");
	scanf("%d", &n);
	printf("Input %d number of elements in the array :\n",n);

	for (i = 0; i < n; i++){
		printf("element %d : ",i);
		scanf("%d", a + i);
	}
	printf("The elements you entered are \n");
	for(i = 0; i < n; i++){
		printf("element %d:%d \n", i, *(a+i));
	}
	return 0;

}*/

//14
int main(){

        int *a, i, j, tmp,  n;
        printf("Input the number of elements in the array :");
        scanf("%d", &n);
        printf("Input %d number of elements in the array :\n",n);

        for (i = 0; i < n; i++){
                printf("element %d : ",i + 1);
                scanf("%d", a + i);
        }
        
	for (i = 0; i < n; i++){
		for (j = i+1; j < n; j++){
			if (*(a+i) > *(a + j)){
				tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = tmp;
			}
		}
	}
	printf("\n The array after sorting: \n");
        for (i = 0; i < n; i++){
                printf("element %d:%d \n", i + 1, *(a+i));
        }
	printf("\n");
        return 0;

}
