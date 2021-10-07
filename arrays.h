#include <bits/stdc++.h>
using namespace std;

void Display(int arr[],int size){
    cout<<"[ "<<"Element ]"<<"\t"<<"[ Index ]"<<endl;
    for(int i=0;i<size;i++){
        cout<<"[ "<<arr[i]<<" ] "<<"\t --> \t"<<"[ "<<i<<" ]"<<endl;
    }
}

void Search(int arr[],int size,int element){
            bool x = true;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            cout<<"Element "<<element<<" found ! at a index of "<<i<<endl;
            x = false;
        }
    }
    if(x==true){
        cout<<"Element "<<element<<" Not found ! "<<endl;
    }
}

void Insert(int arr[], int size , int element,int postion){
    size=size+1;
    for(int i=size-1;i>=postion;i--){
        arr[i]=arr[i-1];
    }
    arr[postion]=element;
    Display(arr,size);
}

void Delete(int arr[],int size,int element){
    int index=0;
    bool x = true;
    for(int i=0;i<size;i++){
        if(element==arr[i]){
            index = i;
            x=false;
        }
    }
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    if(x==true){
        cout<<"\nThis Elment doesn't exist in list .\n";
    }else{
        Display(arr,size);
}
}

void SortArray(int arr[],int size){
    for(int i=0;i<size-1;i++){
    for (int j = 0; j < size-i-1; j++){
        if(arr[j]>arr[j+1]){
            int temp =0;
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }}
    Display(arr,size);
}


int GratestAEle(int arr[],int size){
    for(int i=0;i<size-1;i++){
    for (int j = 0; j < size-i-1; j++){
        if(arr[j]<arr[j+1]){
            int temp =0;
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }}
    return arr[0];
}

