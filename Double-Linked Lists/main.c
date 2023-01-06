#include <stdio.h>
#include <stdlib.h>
struct node{
	struct node *next;
	struct node *prev;
	int data;
};
//Çift Baðlý Doðrusal Listenin Baþýna Eleman Eklemek
void InsertAtFirst(int x){
	
	if(head==NULL){
	head = (struct node)malloc(sizeof(struct node));
	head->prev=NULL;
	head->next=NULL;
	head->data=x;
	}
	else{
	temp = (struct node)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	temp->prev=NULL;
	head=temp;		
	}
}
//Çift Baðlý Doðrusal Listenin Sonuna Eleman Eklemek
void InsertAtEnd(int x){
	if(head==NULL){
		head = (struct node)malloc(sizeof(struct node));
		head->prev=NULL;
		head->next=NULL;
		head->data=x;
	}
	else{
		last=(struct node)malloc(sizeof(struct node));
		temp=(struct node)malloc(sizeof(struct node));
		struct node *last = head;
		while(last->next!=NULL){
			last = last->next;
		}
		temp->data=x;
		temp=last->next;
		temp->prev=last;
		temp->next=NULL;
	}
}
//Çift Baðlý Doðrusal Listelerde Araya Eleman Eklemek
void addthen(node* other_node, node*& list, int n) {
node* temp = head;
int i = 1;
while(i < n) {
head = head -> next;
i++;
}
other_node -> prev = head;
other_node -> next = head -> next;
head -> next = other_node;
head = temp;
}
//Çift Baðlý Doðrusal Listelerde Verilen Bir Deðere Sahip Düðümü Silmek
void double_linked_remove(int x){
	if(head==NULL){
		printf("Liste boþ.");
	}
	else{
		struct node *temp = head;
		while(temp->data!=x){
			temp=temp->next;
			temp->prev->next=temp->next;
		}
		if(temp->next==NULL){
			temp->next->prev=temp->prev;
		}
		
	}
	
}
//ÇÝFT BAÐLI DAÝRESEL(Double Linked) LÝSTELER//
//Çift Baðlý Dairesel Listelerde Baþa Düðüm Eklemek
void addhead(int x){
	if(head==NULL){
		head=(struct node)malloc(sizeof(struct node));
		head->data=x;
		head->next=head;
		head->prev=head;
	}
	else{
		temp=(struct node)malloc(sizeof(struct node));
		struct node *last = head;
		head->prev->next=temp;
		temp->data=x;
		temp->next=head->prev;
		head->prev=temp;
		head=temp;
	}
}
void addlast(int x){
	temp = (struct node*)malloc(sizeof(struct node));
	struct node *last = head;
	if(head==NULL){
		head=(struct node)malloc(sizeof(struct node));
		head->data=x;
		head->next=head;
		head->prev=head;
	}
	else{
		while(last->next!=head){
			last=last->next;
		}
		temp=last->next;
		temp->data = x;
		temp->prev=last;
		temp->next=head;
		last=temp;
	}
}

int main(int argc, char *argv[]) {
	return 0;
}
