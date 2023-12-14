#include<stdio.h>
int main(void){
	int arr[]={6,2,1,5,3};
	int i;
	int *q;
	q=arr;
	printf("\n%p",arr);
	printf("\n%p",q);
	q++;
	printf("\n%p",&arr);
	printf("\n%p",&q);
	printf("\n%d",arr[2]);
	printf("\n%d",2[arr]);
	printf("\n%d",*(arr+2));
	printf("\n%d",*(q+1));
	printf("\n%p",arr+1);
	printf("\n%p",&arr+1);
	printf("\n%p",&arr[0]+1);
	printf("\n%d",*(arr+1));
	printf("\n%d",*arr+1);//it gives 7
	
	//loop code
	for(i=0;i<5;i++){
		//scanf("%d",&arr[i]);
		//scanf("%d",arr+i);
		//scanf("%d",i+arr);
		scanf("%d",q+i);
	}
	for(i=0;i<5;i++){
	//	printf("\n%d",arr[i]);
	//	printf("\n%d",*(q+1));
	//	printf("\n%d",*(arr+1));
	//	printf("\n%d",i[arr]);
		printf("\n%d",i[q]);
	}
	return 0;
}
