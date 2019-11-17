#include <iostream>
using namespace std;


int main() {
    int a,b,c;
    const int trans=12;
    cout<< "身高(英寸):";

    cin>>a;
    b=a/trans;
    c=a%trans;
    cout<<b<<"英尺"<<c<<"英寸"<<endl;

    return 0;
}