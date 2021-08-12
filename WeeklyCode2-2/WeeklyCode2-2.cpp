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

	if (x[0] == '0' || y[0] == '0') printf("NOT Q");
	else if (x[0] != '-' && y[0] != '-') printf("Q1");
	else if (x[0] == '-' && y[0] != '-') printf("Q2");
	else if (x[0] == '-' && y[0] == '-') printf("Q3");
	else if (x[0] != '-' && y[0] == '-') printf("Q4");

	return 0;
}



