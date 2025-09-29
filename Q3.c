#include<stdio.h>
#include<stdlib.h>
int main (){
	int number;
	int rev = 0;
	int n;
	printf("Enter a number");
	scanf("%d",&number);
	
	while (number>0){
		n = number % 10;
		rev = rev * 10 + n;
		number = number / 10;
	}
	
	printf("So Now our reversed number is :- %d \n", rev);
	return 0;
	
}
