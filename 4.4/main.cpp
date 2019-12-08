#include <iostream>

int main() {
    using namespace std;
    string FN,LN,N;
    cout<<"Enter your first name:";
    cin>>FN;
    cout<<"Enter your last name:";
    cin>>LN;
    //getline(cin,LN);
    cout<<LN;
    N=FN+", "+LN;
    cout<<"Here's the information in a single string:"<<N<<endl;
    return 0;
}