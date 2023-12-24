#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("myfile.txt");
    if(fout.fail()){
        cout<<"File was not created"<<endl;
        exit(1);
    }

    fout<<"Hello world"<<endl;
    int a=10;
    string str1("This is a test.");
    fout<<a<<str1<<endl;
    fout.close();

    return 0;
}
