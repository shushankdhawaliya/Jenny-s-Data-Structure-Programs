#include<stdio.h>
int main(void){
	int size,i,arr[40],num,pos;
	printf("\nEnter the size of Array... ");
	scanf("%d",&size);
	printf("\nEnter %d Array Elements... ",size);
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	printf("\n%d Array Elements are... ",size);
	for(i=0;i<size;i++)
	printf(" %d",arr[i]);
	printf("\nEnter the Number you want to insert and postion where you want to insert in Array... ");
	scanf("%d%d",&num,&pos);
		for(i=size;i>=pos-1;i++){
			arr[i+1]=arr[i];
		
		}
		arr[pos-1]=num;
	size++;
	printf("\n%d Array Elements are... ",size);
	for(i=0;i<size;i++)
	printf(" %d",arr[i]);
	return 0;
}
