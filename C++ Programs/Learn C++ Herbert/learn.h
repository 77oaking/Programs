#ifndef LEARN_H_INCLUDED
#define LEARN_H_INCLUDED
void io();

void linebuffertest();

void excercise1();

void excersise2();
void excercise3();
void excercise4();
# define SIZE 10
// Declare a stack class for characters
class stack
{
    char stck [ SIZE ]; // holds the stack
    int tos ; // index of top of stack
public :
    void init (); // initialize stack
    void push ( char ch); // push character on stack
    char pop (); // pop character from stack
};
class myclass
{
// private to myclass
    int a;
public :
    void set_a (int num );
    int get_a ();
};
int excercise5();
int abs (int n);
long abs(long n);
double abs(double n);
int excercise6();
int excercise7();
void excercise8();
void date ( char * date ); // date as a string
void date (int month , int day , int year ); // date as numbers

int sroot(int n);
long sroot(long n);
double sroot(double n);
class card{
    int copies;
    char author[50];
    char title[100];
public:
    store();///constructor
    void show();
};

#endif // LEARN_H_INCLUDED
