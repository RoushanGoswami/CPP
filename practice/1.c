#include <stdio.h>

int main(){
	
	int a,b,choice;
	
	printf("enter the numbers :");
	scanf("%d %d", &a, &b);
	
	printf("choice : ");
	scanf("%d0",&choice);
	
	switch(choice){
		case 1 :
			printf("%d",a+b);
			break;
		case 2 :
			printf("%d",a-b);
			break;
	
	default :
		printf("yo yo !");
		}
	
	
	return 0;
}

