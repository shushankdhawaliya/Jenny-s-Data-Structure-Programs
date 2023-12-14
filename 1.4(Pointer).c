#include<stdio.h>
int main(void){
	int b=10;
	int *p;
	p=&b;
	printf("\n%d",b);//\n For next line
	printf("\n%d",*p);
	printf("\n%p",&p);
	printf("\ns%p",p);
	return 0;
}
