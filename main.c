#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("정수 하나를 입력하세요: ");
	scanf("%d", &num);
	if (num>0)
	printf("%d",num);
	else if (num<0)
	printf("%d", -num);
	else if (num == 0)
	printf("%d",num);
	
	return 0;
	 
}
