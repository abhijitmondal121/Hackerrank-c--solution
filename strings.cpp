#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    cout<< a.length()<<" "<< b.length()<<endl;
    cout<<a+b<<endl;
    char t1=a[0];
    char t2=b[0];
    a[0]=t2;
    b[0]=t1;
    cout<<a<<" "<<b;
    return 0;
}
