#include<bits/stdc++.h>
using namespace std;

bool issorted(vector<int> &a)
{
    for(int i = 0 ; i < a.size()-1 ; i++)
        if(a[i] > a[i+1])
            return false;
    return true;
}

vector<int> thanos_sort(vector<int> &a)
{
    int target_length;
    while(!issorted(a))
    {
        target_length = a.size()/2;
        while(a.size() > target_length)
            a.erase(a.begin() + rand()%(a.size()-1));
    }
    return a;
}

int main()
{
    vector<int> a{1,5,2,7,8,4,6};
    thanos_sort(a);
    for(auto t : a)
        cout << t << " ";
    return 0;
}
