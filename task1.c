#include <stdio.h>
int main(){
	int age = 21;
	int *agePointer = &age;
	printf("Addres using variable is %p\n", &age);
	printf("Address using pointer is %p\n", agePointer);
	*agePointer = 4;
	printf("Modified value using pointer is %d\n", age);
	return 0;
}
