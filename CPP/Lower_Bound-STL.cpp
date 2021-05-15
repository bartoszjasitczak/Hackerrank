#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector<int> v;
    vector<int> v2;

    vector<int>::iterator up,low;
    int n,n2;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }

    sort(v.begin(),v.end());


    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int value;
        cin>>value;
        v2.push_back(value);
    }
    for( int i=0;i<n2;i++)
    {
        low=lower_bound(v.begin(),v.end(),v2[i]);
        up=upper_bound(v.begin(),v.end(),v2[i]);
        if(*low==v2[i])
        {
            cout<<"Yes "<<low-v.begin()+1<<endl;
        }
        else
        {
            cout<<"No "<<up-v.begin()+1<<endl;
        }


    }





    return 0;
    }
