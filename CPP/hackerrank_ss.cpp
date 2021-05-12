#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss;
    char ch;
    int a;
    vector<int> parseInts;
    
    ss.str(str);
    while(ss.eof() == false)
    {
        ss >> a >> ch;
        parseInts.push_back(a);
    }
    
    return parseInts;
    
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}