/*
4. write a program in SLL to remove duplicate nodes
Input: 5, 8 , 7 , 1, 7, 8
Output:
Unique elem in SLL: 5, 8 , 7 , 1
Elem which are repeated in SLL: 8,7
*/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};


void insert_elements(struct node** head, int new_data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = new_data;
    new_node -> next = (*head);
    (*head) = new_node;
}

void display_list(struct node *node){
    while (node!=NULL){
        printf("%d\t", node -> data);
        node = node -> next;
    }
}

void remove_duplicate_elements(struct node *temp){
    struct node *ptr1, *ptr2, *duplicate;
    ptr1 = temp;

    while (ptr1 != NULL && ptr1->next != NULL){
        ptr2 = ptr1;

        while (ptr2->next != NULL){
            if (ptr1->data == ptr2->next->data){
                duplicate = ptr2->next;
                ptr2->next = ptr2->next->next;
                remove_duplicate_elements(duplicate);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}

int main(){
    struct node* head = NULL;
    int n;
    printf("\nEnter the total number of elements : ");
    scanf("%d", &n);
    printf("\nEnter the unsorted linked list : ");
    int i;
    for(i = 0; i < n; i++){
        int data;
        scanf("%d", &data);
        insert_elements(&head, data);
    }
    printf("\nLinked list before removing duplicates \t: ");
    display_list(head);
    printf("\n");
    remove_duplicate_elements(head);
    printf("\nUnique elements in the list \t: ");
    display_list(head);
    printf("\n");
    return 0;
}
