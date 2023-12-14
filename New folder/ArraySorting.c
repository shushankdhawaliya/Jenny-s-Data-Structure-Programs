#include<stdio.h>
#include<conio.h>
int main(void){
	int size,i,arr[10],num,j,temp=8;
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
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]+arr[j]==temp){
					printf("\n%d %d",arr[i],arr[j]);
				break;
			}
		}
	}

	return 0;
}
