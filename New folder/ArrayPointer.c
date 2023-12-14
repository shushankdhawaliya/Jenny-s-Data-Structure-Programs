#include<stdio.h>
#include<conio.h>
int main(void){
	int size,i=0,arr[10],*p;
	printf("\nEnter the size or Array... ");
	scanf("%d",&size);
	printf("\nEnter the Array elements... ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n%d Array elements are... ",size);
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	p=arr;
	printf("\n%p",p);
	printf("\n%p",arr);
	printf("\n%d",*(p+1));
	printf("\n%d",*arr);
	printf("\n%d",*(arr+1));
	p++;
	printf("\n%d",*p);
	return 0;
}
