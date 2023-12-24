#include<iostream>

using namespace std;
int main()
{
    int array[]= {-1,2,4,-3,5,2,-5,2};
    int best = 0;
    int n=8;
    for (int a = 0; a < n; a++)//n=8
    {
        for (int b = a; b < n; b++)//b=0
        {
            int sum = 0;
            for (int k = a; k <= b; k++)//k<=0
            {
                sum += array[k];//sum=0-1
            }
            best = max(best,sum);
        }
    }
    cout << best << "\n";

}
