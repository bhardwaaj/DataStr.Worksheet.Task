#include<iostream>
using namespace std;
#define Size 8
int Queue[Size];
class QueueOperations{
    public:
        int front;
        int rear;
        int value;
        int choice;
    QueueOperations(){
        front = -1;
        rear = -1;
    }
    void WelcomeMsg();
    void rearInsert();
    void frontInsert();
    void rearDelete();
    void frontDelete();
    void peekX();
    void DisplayData();
};

int main(){
    int attempt=2;
    label:
    QueueOperations object;
    while(1){
        object.WelcomeMsg();
        switch(object.choice){
            case 1:object.frontInsert();break;
            case 2:object.rearInsert();break;
            case 3:object.frontDelete();break;
            case 4: object.rearDelete();break;
            case 5:object.peekX();break;
            case 6:object.DisplayData();break;
            case 7: cout<<"Reset Operation Done ! Queue Has Reseted Successfully."<<endl;
                    goto label;break;
            case 8:return 0;break;
            default:
                if(attempt<0){                    
                    cout<<"Successfully Closed ! Attempt Limit Cross"<<endl;
                    return 0;
                }
                else{
                cout<<"Unknow Input Try Again "<<attempt<<" attempt left."<<endl;
                attempt--;
                }

        }
    }
}

void QueueOperations::frontInsert(){
    if(front==-1){        
        cout<<"Drop Your Value Here !"<<endl;
        cin>>value;
        front++;
        rear++;
        Queue[rear]=value;
        cout<<"Value "<<value<<" Front EnQueued Operation Done !"<<endl;
    }
    else{
        if(Size-1==rear)
            cout<<"Queue OverFlow Condition ! Can't EnQueue Values."<<endl;
        else{
        cout<<"Drop Your Value Here !"<<endl;
        cin>>value;
        for(int i = rear;i>=0;i--)
    {
        Queue[i+1]= Queue[i];
    }
    rear++;
    Queue[0]=value;
    cout<<"Value "<<value<<" Front EnQueued Operation Done !"<<endl;
    }
    }
}

void QueueOperations::DisplayData(){
    if(front==-1 || rear == -1)
        cout<<"Queue Is In UnderFlow Condition !"<<endl;
    else{  
        cout<<"Elements Of Queue Is :"<<endl;
        for(int i=0;i<=rear;i++)
            cout<<"[ "<<Queue[i]<<" ]--->";
        }
    cout<<endl;
}
void QueueOperations::rearInsert(){
    if(Size-1==rear)
        cout<<"Queue OverFlow Condition ! Can't EnQueue Values."<<endl;
    else if(front==-1){
        cout<<"Drop Your Value Here !"<<endl;
        cin>>value;
        front++;
        Queue[++rear]=value;
        cout<<"Value "<<value<<" Rear EnQueued Operation Done !"<<endl;
    }
    else{
        cout<<"Drop Your Value Here !"<<endl;
        cin>>value;
        Queue[++rear]=value;
        cout<<"Value "<<value<<" Rear EnQueued Operation Done !"<<endl;
    }
}

void QueueOperations::peekX(){
    if(front==-1 || rear==-1)
        cout<<"Queue Is In UnderFlow Condition !"<<endl;
    else if(rear==0)
        cout<<"Front Value is : "<<Queue[rear];
    else{
        cout<<"Front Value is : "<<Queue[front]<<endl;
        cout<<"Rear Value is  :"<<Queue[rear]<<endl;
    }
}

void QueueOperations::frontDelete(){
    if(front==-1 || rear==-1)
        cout<<"Queue Is In UnderFlow Condition !"<<endl;
    else{
    cout<<"Front DeQueued Operation Done . Value "<<Queue[front]<<" DeQueued "<<endl;
    for(int i=front;i<rear;i++)
        Queue[i]=Queue[i+1];
    rear--;
    }
}

void QueueOperations::rearDelete(){
    if(rear==-1)
        cout<<"Queue Is In UnderFlow Condition !"<<endl;
    else
        {        
        cout<<"Rear DeQueued Operation Done . Value "<<Queue[rear]<<" DeQueued "<<endl;
        rear--;
        }
}

void QueueOperations::WelcomeMsg(){
    cout<<endl;
    cout<<"1) --->  Front EnQueued Operation"<<endl;
    cout<<"2) --->  Rear EnQueued Operation"<<endl;
    cout<<"3) --->  Front DeQueued Operation"<<endl;
    cout<<"4) --->  Rear DeQueued Operation"<<endl;
    cout<<"5) --->  Front & Rear EnQueued Values."<<endl;
    cout<<"6) --->  Display Queue Data"<<endl;
    cout<<"7) --->  Reset Queue"<<endl;
    cout<<"8) --->  Exit"<<endl<<endl;
    cin>>choice;
}
