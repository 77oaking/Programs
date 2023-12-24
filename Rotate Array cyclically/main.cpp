#include <iostream>

using namespace std;
template<class X>
X swap_args(X a,X b){
    X temp;
    temp=a;
    a=b;
    b=temp;
}

int rotate_arr(int arr[],int n){
    int temp,temp2;
    if(n<2){
        swap(arr[0],arr[1]);
    }else{
        temp=arr[0];
        arr[0]=arr[n-1];
    for(int i=1;i<n;i++){
        temp2=arr[i];
        arr[i]=temp;
        temp=temp2;
    }
    }

}

int main()
{

    return 0;
}
