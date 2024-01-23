#include<stdio.h>
#include<conio.h>
int main(void){
	int i,j;
	int arr[3][3]={{6,2,5},{0,1,3},{4,9,8}};
	int *p;
	printf("\nYour Matrics is \n");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf(" %d",arr[i][j]);
			}
			printf("\n");
	}
	p=&arr[0][0];
	printf(" %d",p);
	p=arr[0];
	printf(" %d",p);
	printf(" %d",arr);
	printf(" %d",&arr[0][0]);
	printf(" %d",&arr);
	printf(" %d",*arr);
	printf(" %d",arr[0]);
	printf(" %d",arr+1);
	printf(" %d",&arr[1]);
	printf(" %d",*(arr+1));
	printf(" %d",arr[1]);
	printf(" %d",&arr[1][0]);
	printf(" %d",*(arr+1)+2);
	printf(" %d",*(*(arr+1)+2));
	printf(" %d",*arr[i]+j);
	printf(" %d",*(*(arr+1)+2));
	printf(" %d",*(*arr));
	printf(" %d",*p);
	printf(" %d",*(*arr+1));

	return 0;
}
