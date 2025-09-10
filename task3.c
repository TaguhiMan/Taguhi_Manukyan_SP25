#include <stdio.h>

void swap(int *a, int *b){

	printf("Numbers before swap:a = %d, b = %d \n", *a, *b);
	int c = *a;
	*a = *b;
	*b = c;
	

}
int main(){

	int a = 5;
	int b = 7;
	swap(&a, &b);
	printf("Numbers after swap:a = %d, b = %d \n", a,b);
	return 0;
}
