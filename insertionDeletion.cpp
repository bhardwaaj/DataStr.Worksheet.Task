#include<iostream>
using namespace std;
static int choice;
class ArrayList
{
    public:
    int size;
    int array[];
    void ArrayInput(){
        cout<<"Enter Size of your Array :"<<endl;
        cin>>size;
        for(int i=0;i<size;i++){
            cout<<"Enter "<<i<<" Element"<<endl;
            cin>>array[i];
        }
    }
    void ArrayDisplay(){
        cout<<"[Index] : Array Items"<<endl;
        for(int i=0;i<size;i++){
            cout<<"["<<i<<"] : "<<array[i]<<endl;
        }
    }
};
void WelcomeMsg()
{
    printf("1) Display array with index values. :\n"
           "2) Insertion of Element in array .(At a given index) :\n"
           "3) Deletion of Element in array .(At a given index) :\n");
    cin>>choice;
}
void insertion(int arr[],int size, int element,int index)
{
    ArrayList obj1;
    for(int i= size-1;i>=index;i--)
    {
        arr[i+1]= arr[i];
    }
    arr[index]=element;
    cout<<"Done !"<<endl;
}
void Delection(int arr[],int size,int index)
{
    size = size -1;
    ArrayList obj1;
    for(int i=index;i<size;i++)
    {
        arr[i]= arr[i+1];
    }
    cout<<"Done !"<<endl;
}
int main()
{
    int element,index;
    ArrayList obj;
    obj.ArrayInput();
    label:
    WelcomeMsg();
    if(choice==1)
    {
        obj.ArrayDisplay();
        goto label;
    }
    if(choice==2)
    {
        cout<<"Enter Element to be entered in Array:"<<endl;
        cin>>element;
        cout<<"Enter index value: "<<endl;
        cin>>index;
        insertion(obj.array,obj.size,element,index);
        obj.size=obj.size+1;
        obj.ArrayDisplay();
        goto label;
    }
    if(choice==3)
    {
        cout<<"Enter index value of element: "<<endl;
        cin>>index;
        Delection(obj.array,obj.size,index);
        obj.size=obj.size-1;
        obj.ArrayDisplay();
        goto label;
    }
}
