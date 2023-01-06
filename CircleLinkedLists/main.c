#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
//Tek Ba�l� Dairesel Listelerde Ba�a Eleman Eklemek
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
//Tek Ba�l� Dairesel Listelerde Sona Eleman Eklemek
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
//Tek Ba�l� Dairesel Listelerde �ki Listeyi Birle�tirmek
void concatenate(struct node* list_1,struct node* list_2){
	if(list_1==NULL){
		list_1=list_2;
	}
	else{
		// Birinci listenin son d���m�n� last olarak bulmak i�in
	struct node *last=list_1;
	while(last -> next != list_1)
	last = last -> next;
	last->next=list_2; //Birinci listenin sonu ikinci listenin ba��na ba�land�
	// �kinci listenin son d���m�n� last olarak bulmak i�in
	last=list_2;
	while(last -> next != list_2)
	last = last -> next;
	last->next=list_2; //�kinci listenin sonu birinci listenin ba��na ba�land�
	}
}
//head listesinde data's� veri olan node varsa adresini alma
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
//Tek Ba�l� Dairesel Listelerde Verilen Bir De�ere Sahip D���m� Silmek
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
