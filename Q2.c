#include<stdio.h>
int main (){
	int pass = 1213;
	int check;
	
	do {
		printf("Enter your password:- ");
		scanf("%d",&check);
		if (check != pass){
			printf("Wrong password, Enter password again.\n");
		}
	}
	while (check != pass);
		printf("Correct Password");
	return 0;

}
