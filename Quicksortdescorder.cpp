#include <iostream>
using namespace std;
void swap(float arr[], int i, int j)
{
    float temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
float partition(float arr[], int p, int q)
{
    float pivot = arr[q];
    float i = p-1;
     
     for(int j=p; j<q; j++)
     {
     if(arr[j] < pivot)
       {
         i++;
         swap(arr, i, j);
       }
     }
     swap(arr, i+1, q);
     return i+1;
}    
 void quicksort(float arr[], int p, int q)
 {
     if(p<q)
     {
         float pi = partition(arr, p , q);
         quicksort(arr, p, pi-1);
         quicksort(arr, pi+1, q);
     }
 }
  int main()
  {
      int n;
      cout<<"Drop Total Numbers of element"<<endl;
      cin>>n;
      float arr[n];
      for(int i=0;i<n;i++)
      {
        cout<<i<<" element:"<<endl;
        cin>>arr[i];
      }
      quicksort(arr, 0, n-1);
      cout<<"Array Elements in Descending order: "<<endl;
      for(int i=n-1; i>=0; i--)
      {
        cout<<"[ "<<arr[i]<< "]\t";
      }
      cout<<endl;
      return 0;
  }
