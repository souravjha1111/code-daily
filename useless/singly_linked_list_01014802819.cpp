
        // sourav jha 01014802819
#include<stdio.h>
#include<stdlib.h>
struct node{
        int info;
        struct node *link;};
struct node *create_list(struct node *);
    struct node *concat( struct node *start1,struct node *start2);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start,int data);
void Display_list(struct node *start);
 
int main(){
        struct node *start1=NULL,*start2=NULL;
        start1=create_list(start1);
        start2=create_list(start2);
        printf("\nFirst entered list is  : ");
        Display_list(start1);
        printf("\nSecond list is  : ");
        Display_list(start2);
    start1=concat(start1, start2);
        printf("\nConcatenated list is  : ");
        Display_list(start1);
        return 0;}
 
struct node *concat( struct node *start1,struct node *start2){
        struct node *ptr;
        if(start1==NULL){
         start1=start2;
                return start1; }
        if(start2==NULL)
                return start1;
        ptr=start1;
        while(ptr->link!=NULL)
                ptr=ptr->link;
        ptr->link=start2;
        return start1;}
struct node *create_list(struct node *start){
        int i,n,data;
printf("\nEnter the number of elemets in the first linked list : ");
scanf("%d",&n);
        start=NULL;
        if(n==0)
                return start;
         printf("Enter the element to be inserted : ");
        scanf("%d",&data);
        start=addatbeg(start,data);
        for(i=2;i<=n;i++)        {
                printf("Enter the element to be inserted : ");
                scanf("%d",&data);
                start=addatend(start,data);
        }
        return start;
}
 
void Display_list(struct node *start){
        struct node *p;
        if(start==NULL)        {
                printf("\ngive lsit is empty\n");
                return;}
        p=start;
        while(p!=NULL)  {
                printf("%d ", p->info);
                p=p->link;
        }
        printf("\n");
}
 
struct node *addatbeg(struct node *start,int data)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        tmp->link=start;
        start=tmp;
        return start;
}
 
struct node *addatend(struct node *start, int data)
{
        struct node *p,*tmp;
        tmp= (struct node *)malloc(sizeof(struct node));
        tmp->info=data;
        p=start;
        while(p->link!=NULL)
                p=p->link;
        p->link=tmp;
        tmp->link=NULL;
        return start;}




        // sourav jha 01014802819