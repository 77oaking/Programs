#include<iostream>
# include <cstring >
# include <cstdlib >
using namespace std;
class strtype{
    char *p;
    int len;
public:
    strtype(char *ptr);
    ~strtype();
    void show();
};

strtype::strtype(char *ptr){
    len=strlen(ptr);
    p=(char *)malloc(len+1);
    if(!p){
        cout<<"Allocation error";
        exit(1);
    }
    strcpy(p,ptr);
}
strtype::~strtype(){
    cout<<"Destroying Memory. \n";
    free(p);
}
void strtype::show(){
    cout<<p<<"-lenth: "<<len;
    cout<<"\n";
}
int main(){
    strtype ob("This is good"),ob2("I like c++");
    ob.show();
    ob2.show();
}
