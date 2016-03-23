char* toLowerCase(char* str){
	int i;
	int length = strlen(str);
	for(i = 0; i < length; i++)
		str[i] = tolower(str[i]);
	return str;
}