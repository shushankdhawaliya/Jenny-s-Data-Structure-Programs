#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 10
#define true 1
#define false 0
struct stack{
	int data[MAX];
	int top;
};
void push(struct stack*,int x);
int pop(struct stack*);
int isfull(struct stack s);
void display(struct stack);
int peek(struct stack);
int isempty(struct stack s);
int main(void){	
int x,ch;
struct stack st;
st.top=-1;
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
	if(isfull(st)==true){
		printf("\nStack Overflow");
	}
	else{
		printf("\nEnter the element... ");
		scanf("%d",&x);
		push(&st,x);
	}
break;
case 2:
	if(isempty(st)==true){
		printf("\nStack Underflow");
	}
	else{
		
		x=pop(&st);
		printf("\nPoped element is %d... ",x);
	}
break;
case 3:
	if(isempty(st)==true){
		printf("\nStack Already Underflow");
	}
	else{
		
		x=peek(st);
		printf("\nPeek element is %d... ",x);
	}
break;
case 5:
	exit(0);
break;		
case 4:
	display(st);
break;
	default:
		printf("\nWrong Input..");
	break;
}
}
	return 0;
}

int isempty(struct stack s){
	if(s.top==-1)
		return true;
	else 
		return false;	
		
}
int peek(struct stack s){
	int x;
	x=s.data[s.top];
	return x;
}
int isfull(struct stack s){
	if(s.top==MAX-1)
		return true;
	else 
		return false;	
		
}
void push(struct stack *s,int x){
	s->top=s->top+1;
	s->data[s->top]=x;
}
void display(struct  stack s){
	int i;
	for(i=s.top;i>=0;i--){
		printf(" %d",s.data[i]);
	}
}
int pop(struct stack *s){
	int x;
	x=s->data[s->top];
	s->top=s->top-1;
	return x;
}
