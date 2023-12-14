#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define true 1
#define false 0
struct stack{
	int data;
	struct stack *next;
} *head,*temp;
void push(int x);
int pop();
int isfull();
void display();
int peek();
int isempty();
int main(void){	
int x,ch;
head=0;
while(1){
printf("\n\n\n\t\t\tMain Menu");
printf("\nPress 1. For Push element into stack... ");
printf("\nPress 2. For Pop element from stack... ");
printf("\nPress 3. For Top element of stack... ");
printf("\nPress 4. For List all element of stack... ");
printf("\nPress 5. For Exit.. ");
printf("\nEnter your Choice... ");
scanf("%d",&ch);
switch(ch){
case 1:
		printf("\nEnter the element... ");
		scanf("%d",&x);
		push(x);
break;
case 2:
	if(isempty()==true){
		printf("\nStack Underflow");
	}
	else{
		
		x=pop();
		printf("\nPoped element is %d... ",x);
	}
break;
	case 3:
	if(isempty()==true){
		printf("\nStack Already Underflow");
	}
	else{
		
		x=peek();
		printf("\nPeek element is %d... ",x);
	}
	break;
	case 5:
		exit(0);
	break;		
	case 4:
		display();
	break;
	default:
		printf("\nWrong Input..");
	break;
}
}
	return 0;
}

int isempty(){
	if(head==0)
		return true;
	else 
		return false;	
		
}
int peek(){
	int x;
	x=head->data;
	return x;
}
void push(int x){
	struct stack *newnode;
	newnode=(struct stack*)malloc(sizeof(struct stack));
	newnode->data=x;
	newnode->next=0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
}
void display(){
	struct stack *tmp;
	tmp=head;
	while(tmp->next!=0){
		printf(" %d",tmp->data);
		tmp=tmp->next;
	}
}
int pop(){
	int x;
	x=head->data;
	head=head->next;
	return x;
}
