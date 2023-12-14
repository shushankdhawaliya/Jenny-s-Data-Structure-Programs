#include<stdio.h>
#include<conio.h>
int main(void){
	int m,n,i,arr[10][10],j;
	printf("\nEnter the size of row and column... ");
	scanf("%d%d",&m,&n);
	printf("\nEnter the Array elements... ");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[i][j]);	
		}
		
	}
	printf("\nEnter the Array elements... \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" %d", *(*arr));	
		}
		printf("\n");
	}
	return 0;
}
