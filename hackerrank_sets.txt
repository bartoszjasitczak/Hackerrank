#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int queries, choice, value;
    set<int> SET;

    cin>>queries;
    for(int i = 0; i<queries; i++)
    {
        cin>>choice;
        cin>>value;
        if (choice == 1) SET.insert(value);
        if (choice == 2) SET.erase(value);
        if (choice == 3) {

            set<int>::iterator itr=SET.find(value);

            if ( itr == SET.end()) cout<<"No\n";
            else cout<<"Yes\n";



        }

    }
    return 0;
}






