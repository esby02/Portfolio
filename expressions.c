#include <stdio.h>
//idk

int main() {
	int a, b;
	char c;
	
	a = 10;
	b = 20;
	scanf("%c",&c);
	
	if(a < b){
		printf("a is less than b\n");
	}

	if(c >= 'a' && c <='z' ){  // and expression 
		printf("c is lowercase\n");
	}
	else if(c <= 'Z' && c >= 'A'){
		printf("c is uppercase\n");
	}
	else{
		printf("c is not a letter\n");
	}

	return 0;
}
