#include<iostream>
using namespace std;
static int choice;
void WelcomeMsg()
{
    printf("1) Display array with index values. :\n"
           "2) Search Element in array.(linear Search ) :\n"
           "3) Search Element in array.(Binary Search ) :\n");
    cin>>choice;
}
void SearchArrayElement(int size , int *arr, int element)
{
    int temp=0;
    for(int i=0;i<size;i++){
        if(element==arr[i])
            cout<<element<<" Element Found At Location :  "<<i<<endl;
            temp=1;
    }
    if(temp==0)
        cout<<element<<" Element not found in array"<<endl;
}
void BinarySearch(int size, int *arr, int element)
{ 
    int first_index = 0;
    int last_index = size;
    int middle = (first_index+last_index)/2;
    while(first_index <= last_index)
    {
        if(arr[middle]<element)
            first_index = middle+1;
        else if(arr[middle]==element)
        {
            cout<<element<<" element found in given array at index : "<< middle;
            break;
        }
        else
            last_index = middle-1;
        middle = (first_index+last_index)/2;
    }
    if(first_index>last_index)
        cout<<element<<" is not found in given Array";
    cout<<endl;
}
class array
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
int main()
{
    array obj;
    obj.ArrayInput();
    while(true)
    {
        WelcomeMsg();
    if(choice==1){
        obj.ArrayDisplay();
    }
    else if(choice==2){
        int element;
        cout<<"Enter your element : "<<endl;
        cin>>element;
        SearchArrayElement(obj.size,obj.array,element);
    }
    else if(choice==3){
        int element;
        cout<<"Enter your element : "<<endl;
        cin>>element;
        BinarySearch(obj.size,obj.array,element);
    }
    }
    return 0;
}
