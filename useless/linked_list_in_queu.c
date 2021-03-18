#include<stdio.h>
#include<stdlib.h>
void insert_in_beginning(int); // Function to insert node in the beginning
void delete_last_node() ; // function to delete the last node

// Basic node structure

struct node
{
int data;
struct node *next;
};
struct node *head;
void main ()
{
int choice,item;

// Options for the user to perform operations
while(1)
{

printf("\nEnter the operation you want to perform\n");
printf("\n 1.Insert the node in the beginning\n 2.Delete the last node \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n Enter the value\n");
scanf("%d",&item);
insert_in_beginning(item);
break;
case 2 :
printf("\n Delete the last node");
delete_last_node() ;
break;
case 3 :
exit(0);
default :
printf("Enter a valid option !!!!!!!!!!!!");

}

}

}

void insert_in_beginning(int item)
{

// Allocating memory for the node
struct node *ptr = (struct node *)malloc(sizeof(struct node));
struct node *temp;
// Checking the condition of Overflow
if(ptr == NULL)
{
printf("\n OVERFLOW : Cannot insert more elements\n");
}
else
{
ptr -> data = item;
if(head == NULL)
{
head = ptr;
ptr -> next = head;
}
else
{
temp = head;
while(temp->next != head)
temp = temp->next;
ptr->next = head;
temp -> next = ptr;

head = ptr;
}
printf("\n----Node Inserted in the beginning -----\n");
}

}

void delete_last_node()

{
struct node *ptr, *preptr;
// Checking condition for Underflow

if(head==NULL)
{
printf("\nUNDERFLOW : No elements to be deleted !!!!!!!!\n");
}
else if (head ->next == head)
{
head = NULL;
free(head);
printf("\n Last Node Deleted\n");
}
else
{

ptr = head;
while(ptr ->next != head)
{
preptr=ptr;
ptr = ptr->next;
}
preptr->next = ptr -> next;
free(ptr);
printf("\n Last Node Deleted\n");
}
}