#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class stck{
    char *p;
    int i;
    int tos;
    char who;
public:
    stck(int n,char c);
    ~stck();
    void push(char c);
    char pop();
    void show();
};
stck::stck(int n,char c){
    i=n;
    p=(char *)malloc(n);
    if(!p){
        cout<<"allocation error.";
        exit(1);
    }
    //*p='\0';
    who = c;
    cout << " Constructing stack " << who << "\n";
}

stck::~stck(){
    cout<<"\n Destroying stack \n";
    free(p);
}

void stck::push(char c){
    if(tos==i){
        cout<<"stck is full";
        return;
    }
    p[tos]=c;

    tos++;
}
char stck::pop(){
if(tos ==0)
{
cout << "Stack " << who << " is empty \n";
return 0; // return null on empty stck
}
tos --;
return --*p;
}

void stck::show(){
    for(int j=0;j<i;j++){
        cout<<p[j];
    }
}

int main(){
    stck ob1(5,'A');
    ob1.push('a');
    ob1.push('z');
    ob1.push('m');
    ob1.push('A');
    ob1.push('n');
    cout<<ob1.pop();
    ob1.show();
    return 0;
}

