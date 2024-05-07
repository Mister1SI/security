
unsigned hash(char* str) {

    unsigned hash = 0, i = 0;
	char x = 0;
    while (str[i]) {
        x = str[i];
		hash += x;
        i++;
    }
    
	return hash;
}

