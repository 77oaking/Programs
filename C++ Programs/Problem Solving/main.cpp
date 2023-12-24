#include<bits/stdc++.h>

using namespace std;

string reverseword(string str);

template<class x>
void swapargs(x &a,x &b){
    x temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;

        cin>>s;

        cout<<reverseword(s)<<"\n";
    }

}


string reverseword(string str){
//    string::iterator frnt=str.begin();
//    string::iterator rear=str.end();
    int j=str.length()-1;
    int i=0;
    while(i<j){
        //swapargs(str[frnt],str[rear]);
//        string temp;
//        temp=str[i];
//        str[i]=str[j];
//        str[j]=temp;
        swapargs(str[i],str[j]);

        i++;
        j--;

    }
    return str;
}
