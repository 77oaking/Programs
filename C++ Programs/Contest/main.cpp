#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int a;
    unsigned int b[1000];
    cin>>a;
    if(a<2)return 0;

    int minimum=INT_MAX,maximum=0,maximum2=0;
    for(int i=0;i<a;i++){
        cin>>b[i];
        minimum=(b[i]<minimum)?b[i]:minimum;
        if(b[i]>maximum){
            maximum2=maximum;
            maximum=b[i];
        }else if(b[i]>maximum2 && b[i]<maximum){
            maximum2=b[i];
        }
    }

    cout<<maximum2-minimum;
    return 0;
}
