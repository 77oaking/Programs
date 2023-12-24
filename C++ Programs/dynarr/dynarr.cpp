#include"dynarr.h"
#include<iostream>
using namespace std;

dynarr::dynarr()
{
    data =NULL;
    size = 0;
}
dynarr::dynarr(int s)
{
    data = new int[s];
    size = s;
}
dynarr::~dynarr()
{
    delete []data;
}
void dynArr::allocate(int s)
{
    int *allocated = new int[s];
    for (int i = 0; i < size && i < s; i++)
    {
        allocated[i] = data[i];
    }
    delete[] data;
    data = allocated;
    // to show the size diffrence we will add data
    for (int i = size; i < s; i++)
        data[i] = i;
    size = s;
}
void dynarr::setValue(int index,int value)
{
    data[index] = value;
}
int dynarr::getValue(int index)
{
    return data[index];
}
