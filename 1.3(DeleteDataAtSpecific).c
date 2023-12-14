#include<stdio.h>
int main(void){
	int arr[50],size,i,pos;
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
	printf("\nEnter the position where you want to delete Element... ");
	scanf("%d",&pos);
	for(i=pos-1;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
	printf("\nNow, your %d Array Elements are... ",size);
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
