#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int queries, choice, mark, mark_sum;
    string name = "";
    mark_sum = 0;
    map<string,int> MAP;

    cin>>queries;
    for(int i = 0; i<queries; i++)
    {
        cin>>choice;
        if (choice == 1) {
            cin>>name>>mark;
           
            MAP[name] += mark;
            
        }
        if (choice == 2) {
            cin>>name;
            MAP.erase(name);
        
        }
        if (choice == 3) {
            cin>>name;

            map<string,int>::iterator itr=MAP.find(name);

            if ( itr == MAP.end()) cout<<"0\n";
            else cout<<MAP[name]<<endl;



        }

    }
    return 0;
}



