#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char x[999], y[999];
	printf("Enter x : ");
	scanf("%s", &x);
	printf("Enter y : ");
	scanf("%s", &y);

	//	printf("%d\n",countX);
	//	printf("%d\n",countY);
	//	printf("%d\n",x);
	//	printf("%d\n",y);

	if (x[0] == '0' || y[0] == '0') printf("This point doesn't lies in the quandrant.");
	else if (x[0] != '-' && y[0] != '-') printf("This point lies in the 1st quandrant.");
	else if (x[0] == '-' && y[0] != '-') printf("This point lies in the 2nd quandrant.");
	else if (x[0] == '-' && y[0] == '-') printf("This point lies in the 3rd quandrant.");
	else if (x[0] != '-' && y[0] == '-') printf("This point lies in the 4th quandrant.");
	return 0;
}



