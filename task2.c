#include <stdio.h>
int main(){

	int arr[5] = {3,56,76,1,4};
	int *arrPointer = arr;
	printf("Use pointer to traverse the array: \n");
	for(int i = 0; i<5; i++){
	printf("%d\n", *(arrPointer + i));
	}
	
	printf("Array after modification: \n");
	for(int i = 0; i<5; i++){
	*(arrPointer+i) = i + 6;
	}
	
	printf("Print array using pointer: \n");
	for (int i = 0; i<4; i++){
	printf("%d\n", *(arrPointer + i));
	}

	printf("Print array using array name: \n");
	for(int i = 0; i<5; i++){
	printf("%d\n", arr[i]);
	}

	return 0;

}
