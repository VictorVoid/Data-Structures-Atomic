#include "isOnlyLetters.h"
#include <stdio.h>

int isOnlyLetters(char* VALUE){
	int i = 0;
	while(VALUE[i] != '\0'){
		if(isdigit(VALUE[i]))
			return 0;
		i++;
	}
	return 1;
}

int main(){
	char* name = "Victor";
	if(isOnlyLetters(name))
		printf("yes");
	else
		printf("no");

	return 0;
}
