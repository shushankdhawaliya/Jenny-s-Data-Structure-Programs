#include<stdio.h>
#include<conio.h>
int main(void){
	int size,i,arr[10],num,j;
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
	printf("\nEnter the Element what you want to delete... ");
	scanf("%d",&num);
	for(i=0;i<size;i++){
		if(arr[i]==num){
			for(j=i;j<size-1;j++){
				arr[j]=arr[j+1];
			}
			break;
		}
	}
	size--;
	printf("\n%d Array elements are... ",size);
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
