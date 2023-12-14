#include<stdio.h>
int main(void){
	int arr[50],size,i,pos,num;
	printf("\nEnter the size of Array... ");
	scanf("%d",&size);
	printf("\nEnter %d Array Elements... ",size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("\nYour %d Array Elements are... ",size);
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	printf("\nEnter the position where you want to inert Element... ");
	scanf("%d",&pos);
	printf("\nEnter the Data... ");
	scanf("%d",&num);
	for(i=size-1;i>=pos-1;i--){
		arr[i+1]=arr[i];
	}
	arr[pos-1]=num;
	size++;
	printf("\nNow, your %d Array Elements are... ",size);
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
