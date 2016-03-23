int isOnlyLetters(char* VALUE){
	int i = 0;
	while(VALUE[i] != '\0'){
		if(isdigit(VALUE[i]))
			return 0;
		i++;
	}
	return 1;
}
