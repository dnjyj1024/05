#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x;
	int trial = 0;
	
do
{ printf("���ڸ� �Է��ϼ���:\n");
  scanf("%d", &x);
   
  if (x>answer)
  	printf("���ڰ� �� Ů�ϴ�.\n"); 
  else if (x<answer)
  	printf("���ڰ� �� �۽��ϴ�.\n"); 
  	trial = trial + 1; 
  
}
while(x != 59);

 printf("number of trial = %i\n", trial);
}

