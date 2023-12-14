#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
#define true 1
#define  false 0
struct queue{
	int arr[MAX];
	int rear;
	int front;
};
int isfull(struct queue);
int isempty(struct queue);
void enqueue(struct queue*,int);
int dequeue(struct queue*);
void display(struct queue);
struct queue q;

int main(void){
	int  ch,x;
	q.front=-1;
	q.rear=-1;
	while(1){
	printf("\n\t\t\t\tMain Menu");
	printf("\nPress 1. For Insert Element in Queue... ");
	printf("\nPress 2. For Delete Element From Queue... ");
	printf("\nPress 5. For Display All elements of Queue... ");
	printf("\nPress 0. For Exit... ");
	printf("\n\n\t\t\t\tEnter your Choice");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			if(isfull(q)==true)
				printf("\nQueue is full");
			else{
				printf("\nEnter the Element you want to insert... ");
				scanf("%d",&x);
				enqueue(&q,x);
			}
			
		break;
		case 2:
			if(isempty(q)==true)
				printf("\nQueue is Empty");
			else{
				
				x=dequeue(&q);
				printf("\nDeleted Element is... %d",x);
			}
			
		break;
		case 5:
			display(q);
		break;
		case 0:
			exit(0);
			break;
		default:
			printf("\nInvalid Operation... ");
		break;
	}
}
	return 0;
}
int dequeue(struct queue *q){
	int x;
	if(q->rear==q->front){
		q->front=q->rear=0;
	}
	else{
			x=q->arr[q->front];
			q->front=q->front+1;
	}
	return x;

}
int isfull(struct queue q){
	if(q.rear==MAX-1&&q.front==0)
		return true;
	else
		return false;
	
}
int isempty(struct queue q){
	if(q.rear==-1&&q.front==-1)
		return true;
	else
		return false;
	
}
void enqueue(struct queue *q,int x){
	if(q->front==-1&&q->rear==-1){
		q->front=q->rear=0;
		printf("first block");
	}
	else if(q->rear==MAX-1){
		int i;
		for(i=q->front;i<=q->rear;i++)
			q->arr[i-q->front]=q->arr[i];
		q->rear=q->rear-q->front+1;	
		q->front=0;
	}
	else
		q->rear=q->rear+1;
	q->arr[q->rear]=x;
}
void display(struct queue q){
	int i;
	for(i=q.front;i<=q.rear;i++)
		printf(" %d",q.arr[i]);
}
