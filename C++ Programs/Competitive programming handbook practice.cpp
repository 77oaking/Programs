#include <iostream>
using namespace std;

int maxsubarray(int arr[],int n){
    int best=0,sum=0;
    for(int k=0;k<n;k++){//sum=-1,best=-1,k=5
        sum=max(arr[k],sum+arr[k]);//max(5,5+3),sum=3
        best=max(best,sum);//max(6,8),best=8
    }
    return best;
}

int main(){
    int arr[8]={-1,2,4,-3,5,2,-5,2};
    cout<<maxsubarray(arr,8);

    return 0;
}
