// Abhay Singh 
// 07 Oct 2021
// Stack Linear Linked List Using Array
// Menu Given Program with all prop.

#include<bits/stdc++.h>
using namespace std;
#define SIZE 8
int Stack[SIZE];
int start = -1;
int choice;


void WelcomeMsg(){
    printf("\n\t1) Push Element"
           "\n\t2) Pop Element"
           "\n\t3) Top Element"
           "\n\t4) Display"
           "\n\t5) Exit\n");
    cin>>choice;
}

bool isEmpty(){
    if(start==-1){
       return true;
    }
    else
        return false;
}

void push(){
    if(start == SIZE-1){
        cout<<"Stack is full ! POP some element and try again.\n";
    }else{
        int element;
        cout<<"Drop Your Element Here !\n";
        cin>>element;
        start++;
        Stack[start]=element;
    }
}

void display(){
    if(isEmpty())
        cout<<"Stack is Empty!"<<endl;
    else{
        cout<<"Stack Element's are :\n";
        for(int i=0;i<=start;i++){
        cout<<"[ "<<Stack[i]<<" ]\t";
    }
    cout<<endl;
    }
}

void pop(){
    if(isEmpty()){
        cout<<"Stack Is Alredy Empty , no Element was PoPed."<<endl;
    }
    else{
        cout<<"Element "<<Stack[start]<<" sucessfully poped."<<endl;
        start--;
    }
}
void top(){
    if(isEmpty())
    cout<<"Stack is Empty!"<<endl;
    else if(start>=1){
        cout<<"Top Element Of Stack is :\t"<<Stack[start]<<endl;
        cout<<"Lower Element Of Stack is :\t"<<Stack[0]<<endl;}
    else{
        cout<<"Top Element Of Stack is :\t"<<Stack[start]<<endl;
    }
}

int main(){
    cout<<"\t\t\t\t\tWelcome In Stack Data Structure\n";
    cout<<"\n\t\t\t\t\thttps:\\www.abhaysingh.ml"<<endl;
    while(true){
        WelcomeMsg();
        switch(choice){
            case 1:push();break;
            case 2:pop();break;
            case 4:display();break;
            case 3:top();break;
            case 5:return false;break;
        }
    }
    return 0;
}

