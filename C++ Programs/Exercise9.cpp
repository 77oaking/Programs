#include<iostream>
using namespace std;

class box{
    double x;
public:
    box(double l,double w,double h);
    double vol();
};
box::box(double l,double w,double h){
    x=l*w*h;
}
double box::vol(){
    cout<<"Volume of the box: "<<x<<endl;
}
int main(){
    double m,n,o;
    cout<<"Enter the measures of the box: ";
    cin>>m>>n>>o;
    box ob1(m,n,o);
    ob1.vol();
    return 0;
}
