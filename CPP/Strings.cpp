#include <iostream>
#include <string>
using namespace std;

int main() {
    using std::cin;
    using std::cout;

    string a,b;
    char c;

    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<std::endl;
    cout<<a+b<<std::endl;
    c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b;




    return 0;
}
