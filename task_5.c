#include <stdio.h>
int main(){
	
	char str[] = "Hello";
	char *strP = str;

	for(int i = 0; i<5; i++){
	printf("%c\n", *(strP+i));
	}

	while(*strP){
		strP++;
	}

	int length = strP - str;
	printf("Length of string is %d\n", length);

	return 0;
}
