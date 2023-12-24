#include<iostream>
#include<vector>
#include <cstdio>
using namespace std;

void takeinput(vector <vector<int>> &a){
    for(int i=0;i<a.size();i++){
        int k;
        cin>>k;
        a.push_back(k);

    }
}
int main(){
    vector<vector<int>> a;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        takeinput(a[i]);
    }
    for(int i=0;i<m;i++){
        int j,k;
        cout<<a[j][k];
    }


}


