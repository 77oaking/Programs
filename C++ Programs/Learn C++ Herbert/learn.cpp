#include<iostream>
#include "learn.h"
#include<cmath>
using namespace std;

void myclass :: set_a (int num )
{
    a = num;
}
int myclass :: get_a ()
{
    return a;
}


void io()
{
    int i;
    float j;
    char s[100];
    cout<<"Enter a integer,float and a string: ";
    cin>>i>>j>>s;
    cout<<i<<' '<<j<<' '<<s;
}
void linebuffertest()
{
    char ch;
    cout<<"Input x to stop the programme\n";
    do
    {
        cout<<": ";
        cin>>ch;
    }
    while(ch!='x');
}

void excercise1()
{
    /*Write a program that inputs the number of hours that an employee works and the em-
    ployee's wage. Then display the employee's gross pay. (Be sure to prompt for input.)*/
    int i,j;
    cout<<"Enter The hours of working and wage per hour: ";
    cin>>i>>j;
    cout<<"This is the gross pay of the employee:"<<i*j<<endl;

}
void excersise2()
{
    /*Write a program that converts feet to inches. Prompt the user for feet and display the
    equivalent number of inches. Have your program repeat this process until the user enters
    0 for the number of feet. */
    double f;
    cout<<"To exit the programme input value 0 for feet \n";
    do
    {
        cout<<"Input feet: ";
        cin>>f;
        cout<<"Inches: "<<f*12<<"\n";
    }
    while(f!=0);

}
void excercise3()
{
    /*Here is a C program. Rewrite it so it uses C++-style I/O statements.
    # include <stdio .h>
    int main ( void )
    {
    int a, b, d, min ;
    printf (" Enter two numbers : ");
    scanf ("%d%d", &a, &b);
    min = a > b ? b : a;
    for (d = 2; d<min; d++)
    if ((( a%d) ==0) && ((b%d) ==0) )
    break ;
    if(d== min )
    {
    printf ("No common denominators \n");
    return 0;
    }
    printf (" The lowest common denominator is %d\n", d);
    return 0;
    }*/
    int a, b, d, min ;
    cout<<" Enter two numbers : ";
    cin>>a>>b;
    min = a > b ? b : a;
    for (d = 2; d<min; d++)
        if ((( a%d) ==0) && ((b%d) ==0) )
            break ;
    if(d== min )
    {
        cout<<"No common denominators \n";
        return;
    }
    cout<<" The lowest common denominator is"<<d<<"\n";
    return;
}

void excercise4()
{
    myclass ob1, ob2 ;
    ob1 . set_a (10) ;
    ob2 . set_a (99) ;
    cout << ob1 . get_a () << "\n";
    cout << ob2 . get_a () << "\n";
}
// Initialize the stack
void stack :: init ()
{
    tos = 0;
}
// Push a character
void stack :: push ( char ch)
{
    if(tos == SIZE )
    {
        cout << " stack is full ";
        return ;
    }
    stck [tos ] = ch;
    tos ++;
}
// Pop a character
char stack :: pop ()
{
    if( tos ==0)
    {
        cout << " Stack is empty ";
        return 0; // return null on empty stack
    }
    tos --;
    return stck [ tos ];
}

int excercise5()
{

    stack s1, s2;  // create two stacks
    int i;
// initialize the stacks
    s1. init ();
    s2. init ();
    s1. push ('a');
    s2. push ('x');
    s1. push ('b');
    s2. push ('y');
    s1. push ('c');
    s2. push ('z');
    for (i=0; i <3; i++)
        cout << "Pop s1: " << s1.pop () << "\n";
    for (i=0; i <3; i++)
        cout << "Pop s2: " << s2.pop () << "\n";
    return 0;

}

///function overload not working
///int excercise6()
//{
//    cout << " Absolute value of -10: " << abs ( -10) << "\n\n";
//    cout << " Absolute value of -10L: " << abs ( -10L) << "\n\n";
//    cout << " Absolute value of -10.01: " << abs ( -10.01) << "\n\n";
//    return 0;
//}


// abs () for ints
int abs (int n)
{
    cout << "In integer abs ()\n";
    return n <0 ? -n : n;
}
// abs () for longs
long abs ( long n)
{
    cout << "In long abs ()\n";
    return n <0 ? -n : n;
}
// abs () for doubles
double abs( double n)
{
    cout << "In double abs ()\n";
    return n <0 ? -n : n;
}

int excercise7()
{
date (" 8/23/99 ");
date (8, 23, 99) ;
return 0;
}
// Date as string .
void date ( char * date )
{
cout << " Date : " << date << "\n";
}
// Date as integers .
void date (int month , int day , int year )
{
cout << " Date : " << month << "/";
cout << day << "/" << year << "\n";
}

int sroot(int n){
    int r=sqrt(n);
    return r;
}

long sroot(long n){
    long r=sqrt(n);
    return r;
}
double sroot(double n){
    double r=sqrt(n);
    return r;
}
card::store(){
    cout<<"Input the title of the book: ";
    cin>>title;
    cout<<"Input the name of the author: ";
    cin>>author;
    cout<<"Input the number of available copies: ";
    cin>>copies;
}

void card::show(){
    cout<<"\nTitle: "<<title<<"\nAuthor: "<<author<<"\nNumber of copies: "<<copies;
}
void excercise8(){
    card ob1;
    ob1.store();
    ob1.show();
}
