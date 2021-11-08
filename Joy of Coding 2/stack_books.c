#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct books {
	int Book_Id;
	char Book_Name[20];
	char Book_Author[20];
	float Book_Price;
}book;

void insert_book(book bk[], int*top){
	if(*top==MAX-1){
		printf("Box is full, Books cannot be added!!\n");
		return;
	}
	(*top)++;
	printf("Enter Book_Id, Book_Name, Book_Author, Book_Price\n");
	scanf("%d%s%s%f", &bk[*top].Book_Id, bk[*top].Book_Name, bk[*top].Book_Author, &bk[*top].Book_Price);
	//printf("%d\t%s\t%s\t%f\n", bk[*top].Book_Id, bk[*top].Book_Name, bk[*top].Book_Author, bk[*top].Book_Price);
}

void remove_book(book bk[], int*top){
	if(*top==-1){
		printf("Box is empty, Cannot remove books!!\n");
		return;
	}
	printf("Book removed is: %d\t%s\t%s\t%f\n", bk[*top].Book_Id, bk[*top].Book_Name, bk[*top].Book_Author, bk[*top].Book_Price);
	(*top)--;
}

void display_box(book bk[], int *top){
	int i;
	if(*top==-1){
		printf("Box is empty!!\n");
		return;
	}
	for(i=(*top);i>=0;i--){
		printf("%d\t%s\t%s\t%f\n", bk[i].Book_Id, bk[i].Book_Name, bk[i].Book_Author, bk[i].Book_Price);
	}
}

int main(){
	book bk[MAX];
	int ch, top=-1;
	for(;;){
		printf("1. Insert Book\n2. Remove Book\n3. Display Books\n4. Exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert_book(bk,&top); break;
			case 2: remove_book(bk,&top); break;
			case 3: display_box(bk,&top); break;
			default: exit(0);
		}
	}
}

