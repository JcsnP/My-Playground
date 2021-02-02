#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	int id, i = 0;
	char password[6] = "";

	printf("Enter your id: ");
	scanf("%d", &id);
	
	printf("Enter your password: ");
	while(i < 5){
		password[i] = getch();
		printf("*");
		++i;
	}
	printf("\n");
	
	printf("Your id: %d\nYour password: %s", id, password);
