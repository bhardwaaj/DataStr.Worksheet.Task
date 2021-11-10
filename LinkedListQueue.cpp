#include<stdio.h>
#include<iostream>
using namespace std;   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *next;  
};  
struct node *front;  
struct node *rear;   
void insert();  
void Delete();  
void display();  
int main ()  
{  
    int choice;   
    while(choice != 4)   
    {
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice :");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            Delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice :\n");  
        }  
    }  
}  
void insert()  
{  
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nUnderflow Condition ! Don't Have Values In Queue\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value :\n");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}

void Delete()  
{  
    struct node *ptr;  
    if(front == NULL)  
    {  
        printf("\nUnderflow Condition ! Don't Have Values In Queue\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);
        cout<<"Dequeue Operation Done !"<<endl;
        display();
    }  
}

void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        cout<<"Underflow Condition ! Don't Have Values In Queue\n"; 
    }  
    else  
    {   printf("\nQueue values are :\n");  
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}  
