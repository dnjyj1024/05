#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x;
	int trial = 0;
	
do
{ printf("숫자를 입력하세요:\n");
  scanf("%d", &x);
   
  if (x>answer)
  	printf("숫자가 더 큽니다.\n"); 
  else if (x<answer)
  	printf("숫자가 더 작습니다.\n"); 
  	trial = trial + 1; 
  
}
while(x != 59);

 printf("number of trial = %i\n", trial);
}

