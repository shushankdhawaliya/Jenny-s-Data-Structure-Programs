#include<stdio.h>
int main(){
	int arr[3][3]={6,2,5,0,1,3,4,9,8};
	int *p;
	//p=&arr[0][0];
	p=arr[0];
//	printf("%d",*p);
	printf("\n%d",p);
	printf("\n%d",arr);
	printf("\n%d",&arr[0][0]);
	printf("\n%d",&arr[0]);
	printf("\n%d",&arr);
	printf("\n%d",*arr);
	printf("\n%d",arr[0]);
	printf("\n%d",arr+1);
	printf("\n%d",&arr[1]);
	printf("\n%d",*(arr+1));
	printf("\n%d",arr[1]);
	printf("\n%d",&arr[1][0]);
	printf("\n%d",*(arr+1)+2);
	printf("\n%d",*(*(arr+1)+2));
	printf("\n%d",arr[1][2]);
	
	return 0;
}
