#include <stdio.h>
#include "toUpperCase.h"
#include <stdbool.h>

int main(){
	char nome [100] = "victorigor";
	strcpy(nome, toUpperCase(nome));
	printf("%s\n", nome);

	return 0;
}