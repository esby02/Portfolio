#include <stdio.h>

int main(){
	int x, y, z;
	printf("Enter first number: ");
	scanf("%i", &x);
	printf("Enter second number: ");
	scanf("%i", &y);
	printf("Enter third number: ");
	scanf("%i", &z);
	printf("The sum of the three numbers is %i\n", x + y + z);
	return 0;
}
