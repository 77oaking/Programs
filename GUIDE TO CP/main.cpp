#include <iostream>
#include<vector>

using namespace std;
int n;
vector<int> subset;
void search_w(int k){
    if (k == n+1)
    {
// process subset
        cout<<subset[k]<<"\n";
    }
    else
    {
// include k in the subset
        subset.push_back(k);
        search_w(k+1);
        subset.pop_back();
// don’t include k in the subset
        search_w(k+1);
    }
}

int main()
{

    cin>>n;
    search_w(0);

    return 0;
}
