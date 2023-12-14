#include<stdio.h>
#include<conio.h>
int main(void){
	int size,i,arr[10],num;
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
	printf("\nEnter the Element what you want to insert... ");
	scanf("%d",&num);
	
	arr[size]=num;
	size++;
	printf("\n%d Array elements are... ",size);
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
