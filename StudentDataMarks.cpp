#include <bits/stdc++.h>
using namespace std;
int arr[30][6];
void sortArr(int arr[], int n)
{
    vector<pair<int, int> > vp;
    for (int i = 0; i < n; ++i) {
        vp.push_back(make_pair(arr[i], i));
    }
    sort(vp.begin(), vp.end());
    cout<<"\n============================================================\n";
    cout << "[ Marks Total ]---->\t"
         << "[ Student Name ] " << "----> [ Student Rank ]" << endl;
    for (int i = 0,j=vp.size(); i < vp.size(); i++,j--) {
        cout <<"[ "<< vp[i].first <<" ]  Marks "<< "\t"<<" [ Student "<< vp[i].second+1<<" ] "<<" [ Rank "<<j<<" ]  "<< endl;
    }
}

class Arrays{
    public:
    void arrayInput(int row){
        arr[row][6];
        cout<<"\t\t\t\t\tDrop Your Data Here !:\n"<<endl;
        for(int i=0;i<row;i++){
            cout<<"Drop "<<i+1<<" Student Data:\n"<<endl;
            for(int j=0;j<6;j++){
                cout<<"Drop Your "<<j+1<<" Subject Marks Here !"<<endl;
                cin>>arr[i][j];
            }
            cout<<endl;
        }
    }
    void logic(int row){
        int avgt=0;
        int marks[3]={};
        for(int i=0;i<row;i++){
            int tmarks=0;
            for(int j=0;j<6;j++){
                marks[i] += arr[i][j];
            }
            avgt+=marks[i];
        }
        for(int i=0;i<row;i++){
            cout<<"Total Marks Obtained By Student "<<i+1<<" is   :\t"<<marks[i]<<endl;
            cout<<"Average Marks Obtained By Student "<<i+1<<" is :\t"<<(marks[i]/6)<<endl;
            cout<<"Par. Obtained By Student "<<i+1<<" is          :\t"<<(marks[i]/6)<<" %"<<endl;
            cout<<"\n============================================================\n";
        }
        cout<<"\nInsitute Average Marks is (w.r.t. Subjects) is:\t"<<avgt/6<<" %"<<endl;

         const int N = sizeof(marks) / sizeof(int);
         sortArr(marks,N);
        
    }
};
int main()
{
    Arrays object;
    int d,row=0;
    cout<<"Default(Students will be 3) or A.Question(Students will be 30):\n"<<endl;
    cout<<"For Default ! Plz Drop {1} or For A.Question Drop {0}:\n";
    cin>>d;
    (d==1)?row=3:row=30;
    object.arrayInput(row);
    object.logic(row);
    return 0;
}
