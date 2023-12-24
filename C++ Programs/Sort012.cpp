#include<iostream>
using namespace std;


void sort012(int arr[],int n){
    int cnt[3]={0,0,0};

    for(int i=0;i<n;i++){
        switch(arr[i]){
        case 0:
            cnt[0]=cnt[0]+1;
            break;
        case 1:
            cnt[1]=cnt[1]+1;
            break;
        case 2:
            cnt[2]=cnt[2]+1;
            break;

        }
    }
    int j=0;
    for(int i=0;i<3;i++){
        for(int m=0;m<cnt[i];m++){
            arr[j]=i;
            j++;
        }
    }

}

int main(){

    int arr[]={2,1,2,0,0};

    sort012(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
