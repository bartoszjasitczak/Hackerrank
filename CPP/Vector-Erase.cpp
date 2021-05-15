#include <cmath>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }

    int del_value1,range_1,range_2;
    cin>>del_value1;
    v.erase(v.begin()+del_value1-1);
    cin>>range_1>>range_2;
    v.erase(v.begin()+range_1-1,v.begin()+range_2-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }



        return 0;
}
