#include <stdio.h>
#include <stdlib.h>
 struct node{
 	int data;
 	struct node *next;
 };
 struct node *addhead(struct node *head, int x){
 	temp = (struct node)malloc(sizeof(struct node));
 	temp -> data = x;
 	temp -> next = head;
 	head = temp;
return head;
 };
 struct node *addlast(struct node *head, int x){
 	temp = (struct node)malloc(sizeof(struct node));
 	temp -> data = x;
 	temp ->next = NULL;
 	while(temp2->next != NULL){
 		temp2 = temp2->next;
	 }
	 temp2->next = temp;
	  return head;	 
 }
 void listInfo(struct node *head){
 	int i=1;
 	while (head !=NULL){
 	printf("%d. Dugumunun Adresi = %p \n", i, head);
	printf("%d. Dugumunun verisi = %d \n", i, head -> data);
	printf("%d. Dugumunun Bagli Oldugu Dugumun Adresi= %p\n\n",i, head->next);
	head = head -> next;
	i++;
	 }
 }
 void print(struct node *head){
 	if(head == NULL){
 		printf("No element.");
 		return;
	 }
	 	struct node *temp2;
	 	while(temp2==NULL){
	 		printf("%d\n"temp2->data);
	 		temp2=temp2->next;
		 }
 }
 int counter(struct node *head){
 	int c=0;
 	temp = (struct node)malloc(sizeof(struct node));
 	temp=head;
 	while(temp!=NULL){
 		temp= temp->next;
 		i++;
	 }
 }
 struct node *location(struct node *head,int x){
 	struct node *temp;
 	struct node *temp2;
 	temp2=head;
	temp ->data = x;
 	while(temp2->data == temp ->data){
 		temp2=temp2->next;
	 }
	 return temp2;
 }
 //Tek Baðlý Doðrusal Listelerde Verilen Bir Deðere Sahip Düðümü Silmek
 struct node *remove(struct node*head,int x){
struct node *temp = head;
if(head==NULL){
	printf("Listede eleman yok.");
}
else if(temp->next == NULL || temp->data != x){
	printf("Uygun eleman bulunmamakta.");
}
else{
	while(temp->next->data!=x){
		if(temp->next->next==NULL){
			printf("Silmek istediðiniz veri bulunmamaktadýr.");
			return head;
		}
		temp=temp->next;
	}
	struct node *temp2 = temp -> next;
	temp -> next = temp -> next -> next;
	free(temp2);
}
return head;	
}
void print_reverse(struct node *head){
	struct node *head2=NULL;
	struct node *temp =head;
	while(temp!=NULL){
		head2=addhead(head2,temp->data);
		temp = temp -> next;
	}
	print(head2);
}
struct node *destroy(struct node *head){
	if(head==NULL){
		printf("Liste zaten boþ.");
		return;
	}
	struct node *temp;
	while(head!=NULL){
		temp=head;
		head=head->next;
		free(temp);
	}
	return head;
}
 
  
 int main (int argc,char *argv[]){
 int secim,data;
struct node *head = NULL;
while(1){
printf("1-Listenin Basina Eleman Ekle\n");
printf("2-Listenin Sonuna Eleman Ekle\n");
printf("3-Listeyi Gorme\n");
printf("4-Listeden verilen bir degere sahip dugum silmek\n");
printf("5-Listeyi sil\n");
24
printf("6-Listedeki eleman sayisi\n");
printf("7-Listenin tum eleman bilgileri\n");
printf("8-Programdan Cikma\n");
printf("Seciminiz....?");
scanf("%d",&secim);
switch(secim){
case 1:
printf("Eklemek istediginiz degerini giriniz..?");
scanf("%d",&data);
head=addhead(head,data);
break;
case 2:
printf("Eklemek istediginiz degerini giriniz..?");
scanf("%d",&data);
head=addlast(head,data);
break;
case 3:
print(head);
break;
case 4:
printf("Silmek istediginiz degerini giriniz..?");
scanf("%d",&data);
head=delete(head,data);
break;
case 5:
head=destroy(head);
break;
case 6:
printf("Listede %d eleman vardir\n",count(head));
break;
case 7:
listinfo(head);
break;
case 8:
exit(1);
break;
default: printf("Yanlis secim\n");
}
}
}
