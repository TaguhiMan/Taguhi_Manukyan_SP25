#include <stdio.h>
int main(){
	int a = 5;
	int *aP = &a;
	int **aPP = &aP;
	printf("Variable using pointer %d\n", *aP);
	printf("Variable using pointer of pointer %d\n", **aPP);
	return 0;

}
