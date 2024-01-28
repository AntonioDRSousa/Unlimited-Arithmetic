#include <stdlib.h>
#include<string.h>

char * initNumber(int len){
	char * n = (char *) calloc(len,sizeof(char));
	int i;
	for(i=0;i<len;i++){
		n[i] = '0';
	}
	return n;
}

char * extendNumber(char * n , int len){
	char * new = (char *) calloc(len,sizeof(char));
	int size = strlen(n);
	int i;
	for(i=0;i<len;i++){
		if(i<size){
			new[i]=n[i];
		}
		else{
			new[i]='0';
		}
	}
	return new;
}

void fitSameSize(char * n1, char * n2, char ** aux1, char ** aux2){
	int size1 = strlen(n1);
	int size2 = strlen(n2);
	if(size2>size1){
		*aux1 = extendNumber(n1,size2);
		*aux2 = n2;
	}
	else{
		*aux2 = extendNumber(n2,size1);
		*aux1 = n1;
	}
}