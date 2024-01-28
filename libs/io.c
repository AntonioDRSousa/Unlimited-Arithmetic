#include <stdio.h>
#include <string.h>

void readNumber(char ** n, int len){
	char s[len];
	scanf("%s",s);
	int size = strlen(s);
	int i;
	for(i=0;i<size;i++){
		(*n)[i+len-size]=s[i];
	}
}

void writeNumber(char * n){
	printf("%s",n);
}