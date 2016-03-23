#include <stdio.h>
#include "isEmptyPointer.h"

int isEmptyPointer(int* pointer){
	return (pointer == NULL);
}

int main(){
	int* vic;

	if(isEmptyPointer(vic)){
		printf("yes");
	}else
		printf("no");
	return 0;
}