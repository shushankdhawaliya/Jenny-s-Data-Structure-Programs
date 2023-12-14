#include<stdio.h>
#include<conio.h>
int main(void){
	int size,i,arr[10],num,j,temp,flag=0;
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
	printf("\nEnter Element what you want to serach... ");
	scanf("%d",&num);
	for(i=0;i<size;i++){
		if(arr[i]==num){
			printf("\nYour %d num is at %d position... ",num,i+1);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\nYour %d num is not in Array... ",num);
	}
	
	printf("\n%d Array elements are... ",size);
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}
