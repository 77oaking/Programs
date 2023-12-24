#include <iostream>
#include<vector>
using namespace std;

int lcm(int n){
    int m;
    cin>>m;
    if(m<2){
        unsigned int x;
        cin>>x;
        cout<<"Case "<<n<<": "<<x*x<<endl;
    }else {
        unsigned int sum=1;
        for(int i=0;i<m;i++){
            unsigned int x;
            cin>>x;
            sum=sum*x;
        }
        cout<<"Case "<<n<<": "<<sum<<endl;
    }
}

int main()
{
    int x;
    cin>>x;
    if(x>11)return 0;
    for(int i=1;i<=x;i++){
        lcm(i);
    }

    return 0;
}
