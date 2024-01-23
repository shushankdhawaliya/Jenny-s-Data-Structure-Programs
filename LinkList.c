#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
	struct node *next;
	int data;
};
struct node *head,*temp;
void insertAtBeg(int);
void insertAtEnd(int);
void insertBefEle(int,int);
void insertAftEle(int,int);
void deleteAtBeg();
void deleteAtEnd();
int deleteBefEle(int);
int deleteAftEle(int);
void sortLinkList();
void reverseLinkList();
void display();
void middleElement();
int nthElementFromLast(int);
int nodeCount=0;
int main(void){
	int ch,ele,x;
	head=0;
	while(1){	
		printf("\n\t\t\t\tMain Menu");
		printf("\nPress 1. For Insert Element At Begining of Linklist... ");
		printf("\nPress 2. For Insert Element At End of Linklist... ");
		printf("\nPress 3. For Insert Element At Before A Particular Element... ");
		printf("\nPress 4. For Insert Element At After A Particular Element... ");
		printf("\nPress 5. For display All Elements... ");
		printf("\nPress 6. For Delete Element At Begining of Linklist... ");
		printf("\nPress 7. For Delete Element At End of Linklist... ");
		printf("\nPress 8. For Delete Element Before A Particular Element... ");
		printf("\nPress 9. For Delete Element After A Particular Element... ");
		printf("\nPress 10. For Sorting LinkList... ");
		printf("\nPress 11. For Reverse LinkList... ");
		printf("\nPress 12. For Middle Element of LinkedList... ");
		printf("\nPress 13. For How Many Element in LinkedList... ");
		printf("\nPresss 14. For Find Nth Element From Last... ");
		printf("\nPress 0. For Exit... ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nEnter A Element ");
				scanf("%d",&ele);
				nodeCount++;
				insertAtBeg(ele);
			break;
			case 2:
				printf("\nEnter A Element ");
				scanf("%d",&ele);
				nodeCount++;
				insertAtEnd(ele);
			break;
			case 3:
				 if(head==0){
				 	printf("\nWrong Choice... ");
				 }
				else{
					printf("\nEnter element before you want to add element... ");
					scanf("%d",&x);
					printf("\nEnter that Element you want to insert");
					scanf("%d",&ele);
					insertBefEle(x,ele);
				}
			break;
			case 4:
				 if(head==0){
				 	printf("\nWrong Choice... ");
				 }
				else{
					printf("\nEnter element before you want to add element... ");
					scanf("%d",&x);
					printf("\nEnter that Element you want to insert");
					scanf("%d",&ele);
					insertAftEle(x,ele);
				}
			break;
			case 0:
				exit(0);
			break;
			case 5:
				display();
			break;
			case 6:
				if(head==0)
					printf("Wrong Choice... ");
				else{
					deleteAtBeg();
				}
			break;
			case 7:
				if(head==0)
					printf("Wrong Choice... ");
				else{
					deleteAtEnd();
				}
			break;
			case 8:
				if(head==0){
					printf("Wrong Choice");
				}
				else{
					printf("\nEnter element before you want to delete element... ");
					scanf("%d",&x);
					ele=deleteBefEle(x);
					printf("\nDeleted Element is %d",ele);
					getch();
				}
			break;
			case 9:
				if(head==0){
					printf("Wrong Choice");
				}
				else{
					printf("\nEnter element After you want to delete element... ");
					scanf("%d",&x);
					ele=deleteAftEle(x);
					printf("\nDeleted Element is %d",ele);
					getch();
				}
			break;
			case 10:
				if(head==0){
					printf("Wrong Choice");
				}
				else{
					sortLinkList();
				}
			break;
			case 11:
				if(head==0){
					printf("\nWrong Choice");
				}
				else{
					reverseLinkList();
				}
			break;
			case 12:
				if(head==0){
					printf("\nWrong Choice");
				}
				else{
					middleElement();
				}
			break;
			case 13:
				printf("Linked List contains %d",nodeCount);
			break;
			case 14:
				if(head==0){
					printf("\nWrong Choice");
				}
				else{
					printf("\n Enter Number Which Position you want to find from End ");
					scanf("%d",&x);
					ele =	nthElementFromLast(x);				
					printf("Element is %d",ele);
				}
			break;
			default:
				printf("\nWrong Input");
			break;
		}
	}
	return 0;
}
	int nthElementFromLast(int x){
		struct node *pre;
		int i=1,temp2=0;
		reverseLinkList();
		pre=head;
		
		while(i<=nodeCount){
			if(i==x){
				temp2=pre->data;
				break;
			}
			pre=pre->next;
			i++;
		}
		reverseLinkList();
		return temp2;
	}	
void middleElement(){
	struct node *pre;
	int i=1,count=0;
	for(pre=head;pre->next!=0;pre=pre->next){
		count++;
	}
	++count;
		pre=head;
	while(i<=count){
		if(i==count/2){
			printf(" %d",pre->data);
			break;
		}
		pre=pre->next;
		i++;
	}
	
}
void reverseLinkList(){
	struct node *prenode,*currentnode,*nextnode;
	prenode=0;
	for(currentnode=nextnode=head;nextnode!=0;){
		nextnode=currentnode->next;
		currentnode->next=prenode;
		prenode=currentnode;
		currentnode=nextnode;
		
	}
	head=prenode;
}
void sortLinkList(){
	struct node *new1,*new2;
	int temp;
	for(new1=head;new1->next!=0;new1=new1->next){
		for(new2=new1->next;new2!=0;new2=new2->next){
			if(new1->data>=new2->data){
				temp=new1->data;
				new1->data=new2->data;
				new2->data=temp;
			}
		}
	}
}
void deleteAtBeg(){
	head=head->next;
}
void deleteAtEnd(){
	struct node *ptr;
	for(ptr=head;ptr->next->next!=0;ptr=ptr->next);
	ptr->next=0;
}
int deleteBefEle(int x){
	struct node *pre,*bef,*del;
	int ret;
	bef=head;
	pre=head->next;
	for(pre=head;pre->data!=x;pre=pre->next){
		bef=del;
		del=pre;			
	}
	bef->next=pre;
	ret=del->data;
	return ret;
}
int deleteAftEle(int x){
	struct node *pre,*aft,*del;
	int ret;
	for(pre=head;pre->data!=x;pre=pre->next);
		del=pre->next;
		aft=del->next;		
	pre->next=aft;
	ret=del->data;
	return ret;
}

void insertAtBeg(int i){
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=i;
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
	struct node *new;
	printf("\nLinklist is... ");
	for(new=head;new!=0;new=new->next){
		printf(" %d",new->data);
	}
}
void insertAtEnd(int x){
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
}

void insertBefEle(int x,int ele){
	struct node *newnode,*pre,*newn;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=0;
	for(newn=head;newn->data!=x;newn=newn->next){
		pre=newn;
	}
	pre->next=newnode;
	newnode->next=newn;
}

void insertAftEle(int x,int ele){
	struct node *newnode,*post,*newn;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=0;
	for(newn=head;newn->data!=x;newn=newn->next);
	post=newn->next;
	newn->next=newnode;
	newnode->next=post;
}

