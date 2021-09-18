#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the lenght of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of an array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = 0;
    int counter = 1;
    while (counter < n){
        for (int i = 0; i < n - counter; i++){
            if (arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                x++;
            }
        }
        counter++;
    }
    cout << "\nArray after swap:\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\nNo. of swap performed : " << x << endl;
}
