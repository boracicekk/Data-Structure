#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
//Tek Baðlý Dairesel Listelerde Baþa Eleman Eklemek
void insertAtFront(int x){
	if(head==NULL){	
	head=(struct node*)malloc(sizeof(struct node));
	head->data=x;
	head->next=NULL;	
	}
	else{
		temp = (struct node)malloc(sizeof(struct node));
		struct node *last = head;
		temp->data=x;
		while(last->next!=head){
			last=last->next;
		}
		temp= last->next;
		temp->next=head;
		head=temp;
	}

}
//Tek Baðlý Dairesel Listelerde Sona Eleman Eklemek
void InsertAtLast(int x){
	if(head==NULL){
		head=(struct node)malloc(sizeof(struct node));
		head->data=x;
		head->next=NULL;
	}
	else{
		temp = (struct node)malloc(sizeof(struct node));
		temp->data=x;
		struct node *last=head;
		while(last->next!=head){
			last=last->next;
		}
		temp=last->next;
		temp->next=head;
	}
}
//Tek Baðlý Dairesel Listelerde Ýki Listeyi Birleþtirmek
void concatenate(struct node* list_1,struct node* list_2){
	if(list_1==NULL){
		list_1=list_2;
	}
	else{
		// Birinci listenin son düðümünü last olarak bulmak için
	struct node *last=list_1;
	while(last -> next != list_1)
	last = last -> next;
	last->next=list_2; //Birinci listenin sonu ikinci listenin baþýna baðlandý
	// Ýkinci listenin son düðümünü last olarak bulmak için
	last=list_2;
	while(last -> next != list_2)
	last = last -> next;
	last->next=list_2; //Ýkinci listenin sonu birinci listenin baþýna baðlandý
	}
}
//head listesinde data'sý veri olan node varsa adresini alma
struct node *locate(struct node *head, int x){
	if(head==NULL){
		printf("Listede veri bulunmamakta.");
	}
	else{
		locate=(struct node)malloc(sizeof(struct node));
		struct node *locate = head;
		while(last->data!=x){
			last=last-next;
		}
		printf("Adres: %p", locate);
	}
}
//Tek Baðlý Dairesel Listelerde Verilen Bir Deðere Sahip Düðümü Silmek
struct node *deletenode(struct node*head,int x){
	if(head==NULL){
		printf("Silinecek bir eleman yok.");
	}
	else{
		struct node *temp= head;
		while(temp->next->data!=x){
			temp=temp->next;
		}
		temp2=temp->next;
		temp=temp->next->next;
		free(temp2);
	}

}

















int main(int argc, char *argv[]) {
	return 0;
}
