#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int newdata) {
   struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
   struct Node *ptr = head;
   
   newnode->data = newdata;
   newnode->next = head;
   if (head!= NULL)
    {
         
      while (ptr->next != head)
      ptr = ptr->next;
      ptr->next = newnode;
   } else
   newnode->next = newnode;
   head = newnode;
}
void display() {
   struct Node* ptr;
   ptr = head;
   do {
      cout<<ptr->data <<" ";
      ptr = ptr->next;
   } while(ptr != head);
}

int main() {
    cout<<"enter number of insettion you want to make"<<endl;
int num_of_insertion = 0;
cin>>num_of_insertion;
for(int i=0;i<=num_of_insertion;i++){
    int inserted_number;
    cin>>inserted_number;
    insert(inserted_number);
}
   cout<<"your circular linked list is: ";
   display();
   return 0;
}