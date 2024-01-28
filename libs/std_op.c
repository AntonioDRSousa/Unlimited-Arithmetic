#include <string.h>
#include "num_string.h"

char * addNumber(char * n1, char * n2){
	int len = strlen(n1);
	char * n3 = initNumber(len);
	
	int i , carry;
	char c;
	for(i=(len-1),carry=0;i>=0;i--){
		c = n1[i]+n2[i]+carry-48;
		if(c>57){
			c -= 10;
			carry = 1;
		}
		else{
			carry = 0;
		}
		n3[i]=c;
	}
	
	return n3;
}

char * subNumber(char * n1, char * n2){
	int len = strlen(n1);
	char * n3 = initNumber(len);
	
	int i , carry;
	char c;
	for(i=(len-1),carry=0;i>=0;i--){
		c = n1[i]-n2[i]-carry+48;
		if(n1[i]<(n2[i]+carry)){
			c += 10;
			carry = 1;
		}
		else{
			carry = 0;
		}
		n3[i]=c;
	}
	
	return n3;
}