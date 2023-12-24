///Task 3
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input Row:"<<"\n";
    cin>>n;
    int m[n];
    int **t1=new int*[n];
    for(int i=0;i<n;i++){
        cout<<"Input Column for Row "<<i+1<<":\n";
        cin>>m[i];
        t1[i]=new int[m[i]];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m[i];j++){
            cin>>t1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m[i];j++){
            cout<<t1[i][j]<<"\n";
        }
    }

    delete[] t1;

    return 0;
}
