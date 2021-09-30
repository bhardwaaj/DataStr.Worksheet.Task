#include<iostream>
using namespace std;
int choice=0;
void Welcome(){
    cout<<"1) Drop First Matrix Data  \n";
    cout<<"2) Drop Second Matrix Data \n";
    cout<<"3) Display Addition Of Matrices \n";
    cout<<"4) Display Product Of Matrices \n";
    cout<<"5) Display Transpose Of Matrices \n";
    cout<<"6) Display Matrices Data \n";
    cout<<"7) Exit \n"<<endl;
    cin>>choice;
}
int main()
{
    
    int rows,col,rows1,col1;
    cout<<"Drop no of rows and col of matrix:\n";
    cin>>rows>>col;
    rows1=rows;
    col1=col;
    int arr[rows][col];
    int arr1[rows1][col1];
    while(true){
        Welcome();
        switch(choice){
        
        case 1:{
            for(int i=0;i<rows;i++)
            for(int j=0;j<col;j++){
                cout<<"Drop Matrix[ "<<i<<" ]"<<"[ "<<j<<" ] element:\n";
                cin>>arr[i][j];}
                break;
        }
        case 2:{    
            for(int i=0;i<rows1;i++)
            for(int j=0;j<col1;j++){
                cout<<"Drop Matrix[ "<<i<<" ]"<<"[ "<<j<<" ] element:\n";
                cin>>arr1[i][j];
        }break;
    }
        case 3:{
            cout<<"\n=====================================\n";
            cout<<"After addition of elements\n";
            for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
            int y=arr[i][j] + arr1[i][j];
            cout<<"| "<<y<<" ";}
            cout<<"|"<<endl;
        }cout<<"\n=====================================\n";break;
        }
        case 4:{
            cout<<"\n=====================================\n";
            cout<<"After product of matrix:\n";
            for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                int x = arr[i][j]*arr1[i][j];
                cout<<"| "<<x<<" ";}
                cout<<"|"<<endl;
}cout<<"\n=====================================\n";break;
        }
        case 5:{
            cout<<"\n=====================================\n";
            cout<<"After Transpose of First Matrix :\n";
            for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
            cout<<"| "<<arr[j][i]<<" ";}
            cout<<"|"<<endl;
}
            cout<<"\n=====================================\n";
            cout<<"After Transpose of Second matrix:\n";
            for(int i=0;i<rows1;i++){
            for(int j=0;j<col1;j++){
            cout<<"| "<<arr1[j][i]<<" ";}
            cout<<"|"<<endl;
}cout<<"\n=====================================\n";break;
        }
        case 6:{
            cout<<"\n=====================================\n";
            cout<<"Elements of First Matrix are :\n";
            for(int i=0;i<rows;i++){
                for(int j=0;j<col;j++){
                cout<<"| "<<arr[i][j];}
                cout<<"| "<<endl;}
            cout<<"\n=====================================\n";
            cout<<"\n=====================================\n";
            cout<<"Elements of Second Matrix are :\n";
            for(int i=0;i<rows1;i++){
        for(int j=0;j<col1;j++){
            cout<<"| "<<arr1[i][j];}
        cout<<"| "<<endl;
        }
        cout<<"\n=====================================\n";break;
        }
        case 7:{
            return false;
            break;
        }
        default:
            cout<<"Invaild Input "<<endl;
            break;
    }
    }
return 0;
}
