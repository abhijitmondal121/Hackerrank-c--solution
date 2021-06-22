#include<iostream>
using namespace std;

void update(int &a,int &b) {
    int olda=a;
    a=a+b;
    b=abs(olda-b);
     cout<<a<<endl;
    cout<<b<<endl;
    
       
}

int main() {
    int a, b;
    cin>> a>>b;
    int *apointer=&a;
    int *bpointer=&b;
    update(a,b);
   

    return 0;
}
