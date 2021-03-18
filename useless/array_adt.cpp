#include <iostream>
using namespace std;
//making an array with struct
struct Array{
    int *A;
    int size;
    int length;
};
//display function
void Display(struct Array arr){
    int i;
    cout<<"\n elelments of array are ";
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<" ";
} 

//Append function
void Append( struct Array *arr, int x){
    if(arr->length<arr->size)
        arr->A[arr->length++] = x;
}

//Insert function

void Insert( struct Array *arr, int index, int x){
    int i;
    if(index>=0 && index <=arr->length){
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}
//delete an array value

void Delete(struct Array *arr, int index){
        int i;
    if(index>=0 && index <=arr->length){
        for(i=arr->length;i>index;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
    }
}

//Linear search
int LinearSearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(arr->A[i]==key)
            return i;
    }
    return -1;
}

//binary search
int BinarySearch(struct Array *arr, int key){
    int i=0;
    int start = 0;
    int end = arr->length;
    int middle = arr->length;
    while(start<=end){
        int middle = (end + start)/2;
        if(arr->A[middle]==key)
            return middle;
        else if (arr->A[middle]>key)
            end = middle-1;
        else if (arr->A[middle]<key)
             start = middle+1;
    }
    return -1;
}
//Get
int Get(struct Array *arr, int index){
    if(index>=0 && index<arr->length)
        return arr->A[index];
    return -1;
}
//Set
void Set(struct Array *arr ,int index,int x)
    {if(index>=0 && index<arr->length)
        arr->A[index]=x;}

int main()
{
    struct Array arr;
    int i,n;
    cout<<"enter your size of array \n";    
    cin>>*(&arr.size);
    arr.A = new int[arr.size];
    arr.length=0;
    cout<<"enter elements you want to enter \n";
    cin>>n;
    cout<<"enter your array values \n"; 
    for (i=0;n>i;i++)
        cin>>*(&arr.A[i]);
    arr.length = n;
    Insert(&arr,3,9);
    Append(&arr,73);
    cout<<BinarySearch(&arr,2); 
//    Delete(&arr,2);
    Display(arr);
    return 0;
}