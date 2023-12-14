#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*temp;
int main(void){
	int choice,x,ele;
	void insertBeg(int);
	void insertAtLast(int);
	void insertBefEle(int,int);
	void insertAftEle(int,int);
	void display();
	void delBeg();
	void delLast();
	void delBefEle(int);
	void delAftEle(int);
	void reverse();
	head=0;
	while(1){
		printf("\n\t\t\t\tMain Menu");
		printf("\nPress 1. For Insert Data Beggning of linklist... ");
		printf("\nPress 2. For Insert Data End of linklist... ");
		printf("\nPress 3. For Insert Data Before A given Element... ");
		printf("\nPress 4. For Insert Data After A given Element... ");
		printf("\nPress 5. For Display... ");
		printf("\nPress 6. For Delete Data From Beggning of linklist... ");
		printf("\nPress 7. For Delete Data From Last of linklist... ");
		printf("\nPress 8. For Delete Before A given Element... ");
		printf("\nPress 9. For Delete After A given Element... ");
		printf("\nPress10. For Reverse Linklist");
		printf("\nPress 0. For Exit... ");
		printf("\nEnter your Choice... ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			printf("\nEnter the Element... ");
			scanf("%d",&x);
			insertBeg(x);
			break;
			case 2:
			printf("\nEnter the Element... ");
			scanf("%d",&x);
			insertAtLast(x);
			break;
			case 3:
			printf("\nEnter data you want to insert and element ... ");
			scanf("%d%d",&x,&ele);
			printf("%d %d",ele,x);
			insertBefEle(ele,x);
			break;
			case 4:
			printf("\nEnter data you want to insert and element ... ");
			scanf("%d%d",&x,&ele);
			printf("%d %d",ele,x);
			insertAftEle(ele,x);
			break;
			case 5:
				display();
			break;
			case 6:
				delBeg();
			break;
			case 7:
				delLast();
			break;
			case 8:
				printf("\nEnter the Element Before you want to Delete... ");
				scanf("%d",&x);
				delBefEle(x);
			break;
			case 9:
				printf("\nEnter the Element After you want to Delete... ");
				scanf("%d",&x);
				delAftEle(x);
			break;
			case 10:
				reverse();
				break;
			case 0:
				exit(0);
			break;
			default:
				printf("\nInvalid Input... ");
			break;
		}
	}

	return 0;
}
void reverse(){
	struct node *currentnode,*prenode,*nextnode;
	prenode=0;
	currentnode=nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->next;
		currentnode->next=prenode;
		prenode=currentnode;
		currentnode=nextnode;
	}
	head=prenode;
	
}
void delBefEle(int x){
	struct node *pre,*past,*fut;
	past=head;
	if(head==0)
		printf("wrong Operation... ");
	else{
		pre=past->next;
		fut=pre->next;
		for(fut=pre->next;fut->data!=x;fut=fut->next){
			pre=pre->next;
			past=past->next;
		}
		past->next=fut;
		printf("\nDeleted Node is %d",pre->data);
	
	}
}
void delAftEle(int x){
	struct node *pre,*past,*fut;
	past=head;
	if(head==0)
		printf("wrong Operation... ");
	else{
		pre=head->next;
		fut=pre->next;
		for(;past->data!=x;past=past->next){
			pre=pre->next;
			fut=fut->next;
		}
		past->next=fut;
		printf("\nDeleted Node is %d",pre->data);
	
	}
}
void delLast(){
	struct node *pre;
	for(pre=head;pre->next!=head;pre=pre->next)
	temp=pre;
	temp->next=head;
}
void delBeg(){
	if(head==0)
		printf("\nWrong Operation... ");
	else	
		head=head->next;
		temp->next=head;
}
void insertBeg(int x){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
		
	}
	temp->next=head;
}
void insertAtLast(int x){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
		
	}
	temp->next=head;
}
void insertBefEle(int ele,int x){
	struct node *newnode,*pre,*nextnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(head==0){
		printf("\nYou choosed wrong Action... ");
	}
	else{
		
		
		for(pre=head;pre->data!=ele;pre=pre->next)
			temp=pre;
			nextnode=temp->next;
			//printf("\nfirst %d second %d",temp->data,nextnode->data);
			temp->next=newnode;
			newnode->next=nextnode;
		
	}
}
void insertAftEle(int ele,int x){
	struct node *newnode,*pre,*nextnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(head==0){
		printf("\nYou choosed wrong Action... ");
	}
	else{
		
		
		for(pre=head;pre->data!=ele;pre=pre->next);
		
		if(pre->next==head){
			//	nextnode=pre->next;	
		//	printf("\nfirst %d second %d",temp->data,nextnode->data);
			pre->next=newnode;
			newnode->next=head;
			
		}
		else{
			nextnode=pre->next;	
		//	printf("\nfirst %d second %d",temp->data,nextnode->data);
			pre->next=newnode;
			newnode->next=nextnode;
		}
			
	}
}

void display(){
	struct node *temp;
	printf("\nLinkList is... ");
	for(temp=head;temp->next!=head;temp=temp->next){
		printf(" %d",temp->data);
	}
	printf(" %d",temp->data);
	
}
