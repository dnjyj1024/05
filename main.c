#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	char op; 
	int result;

	printf("식을 입력하세요:");
	scanf("%d %c %d",&a,&op,&b); 
	
{
	if (op == '+')
		result = a+b;	
		
	else if (op == '-')	
		result = a-b;
	

	else if (op == '*')	
		result = a*b;	

	else 
		result = a/b;}
	
printf("%d",result);	
	 

}
