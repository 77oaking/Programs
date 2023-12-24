#include <iostream>
#include<cstdlib>
#define STCSIZE 50
using namespace std;

void push(int i);
int pop(void);
int *p1, *tos,stack[STCSIZE];
void dis(void);

int main(){
    int value;
    p1=stack;
    tos=p1;
    do{
        cout<<"Enter a number (-1 to quit,0 to pop,-11 to display): ";
        cin>>value;

        if(value==-11)dis();
        else if(value!=0)push(value);
        else cout<<"This is it "<<pop()<<endl;
    }while(value!=-1);
    return 0;
}
void push(int i){
    p1++;
    if(p1==(tos + STCSIZE)){
        cout<<"Stack Overflow";
        exit(1);

    }
    *p1=i;
}
pop(void){
    if(p1==tos){
        cout<<"Stack Overflow";
        exit(1);
    }
    p1--;
    return *(p1+1);


}
void dis(void){
    int *temp;
    temp=tos+1;
    if(p1==tos){
        cout<<"No value to show\n";
        exit(1);
    }
    else{
        do{
            cout<<*temp<<"\n";
            temp++;
        }while(temp!=(p1+1));
    }

}
