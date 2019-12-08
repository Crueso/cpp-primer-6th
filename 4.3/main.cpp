#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int size=20;
    char FN[size],LN[size],N[40];
    cout<<"Enter your first name:";
    cin>>FN;
    cout<<"Enter your lase name:";
    cin>>LN;
    strcpy(N,FN);
    strcat(N,", ");
    strcat(N,LN);
    cout<<"Here's the information in a single string:"<<N<<endl;


}