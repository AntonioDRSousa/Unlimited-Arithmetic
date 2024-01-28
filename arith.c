#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libs/num_string.h"
#include "libs/io.h"
#include "libs/std_op.h"


int main(){
	int len;
	printf("len = ");
	scanf("%d",&len);
	char * n1 = initNumber(len);
	char * n2 = initNumber(len);
	
	readNumber(&n1,len);
	readNumber(&n2,len);
	
	char * n3 = addNumber(n1,n2);
	
	printf("n1 -> %s\n",n1);
	printf("n2 -> %s\n",n2);
	printf("n1 + n2 -> %s\n",n3);
	
	char * n4 = subNumber(n1,n2);
	printf("n1 - n2 -> %s\n",n4);

	return 0;
}