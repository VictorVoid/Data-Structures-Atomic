#include <stdio.h>
#include "toLowerCase.h"

int main(){
	char nome [100] = "VICTOR IGOR";
	strcpy(nome, toLowerCase(nome));

	printf("%s\n", nome);
	return 0;
}