#include <iostream>
using namespace std;
int choice=0;
void WelMsg()
{
    printf("1) Display Book pages with array index. :\n"
           "2) Search page in book.\n");
    cin>>choice;
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
        cout<<"Enter Size of your Book (pages) :"<<endl;
        cin>>size;
        for(int i=1;i<=size;i++){
            array[i]=i;
        }
    }
    void ArrayDisplay(){
        cout<<"[Index] : Book pages"<<endl;
        for(int i=1;i<=size;i++){
            cout<<"["<<i<<"] : "<<array[i]<<"\t\t";
        }
        cout<<endl;
    }
};
int main() {
    array obj;
    obj.ArrayInput();
    while(true)
    {
        WelMsg();
    if(choice==1){
        obj.ArrayDisplay();
    }
    else if(choice==2){
        int element;
        cout<<"Drop your page number : "<<endl;
        cin>>element;
        BinarySearch(obj.size,obj.array,element);
    }
    }
    return 0;
}
