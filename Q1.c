#include<stdio.h>
int main() {
	int a;
	int fac = 1;
	int i;
	printf("Enter a number you want the factorial of: ");
	scanf("%d", &a);
	for(i = 1; i <= a; i++)
	{
		fac = fac * i;
	}
	printf("The factorial fo the number is %d", fac);
	return 0;
}
