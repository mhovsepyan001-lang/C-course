#include <stdio.h>
int main(){

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

}
