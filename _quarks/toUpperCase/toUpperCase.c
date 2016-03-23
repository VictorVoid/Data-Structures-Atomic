char* toUpperCase(char* str){
	int i;
	int length = strlen(str);
	for(i = 0; i < length; i++)
		str[i] = toupper(str[i]);
	return str;
}