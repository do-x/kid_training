#include <stdio.h>
#include <string.h>

int main(){
	char a[5]="xiao";
	char b[5]="fei";
	char temp[5];

	/*
	printf("\nStringcopy: \n");

	strcpy(temp, a);
	printf("a=%s\nb=%s\ntemp=%s\n", a, b, temp);
	strcpy(a, b);
	printf("a=%s\nb=%s\ntemp=%s\n", a, b, temp);
	strcpy(b,temp);
	printf("a=%s\nb=%s\ntemp=%s\n", a, b, temp);
	*/

	printf("\nmembercopy: \n");
	
	memcpy(temp, a, 5);
	printf("a=%s\nb=%s\ntemp=%s\n", a, b, temp);
	memcpy(a, b, 5);
	printf("a=%s\nb=%s\ntemp=%s\n", a, b, temp);
	memcpy(b,temp, 5);
	printf("a=%s\nb=%s\ntemp=%s\n", a, b, temp);

	return 0;
}
