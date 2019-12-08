#include <iostream>
#include <string>
using  std::string,std::cin,std::cout,std::endl;
int main() {
    cout<<"What is your first name?";
    string firstname,lastname;
    char grade;
    int age;
    getline(cin,firstname);
    cout<<"What is your last name?";
    getline(cin,lastname);
    cout<<"What letter grade do you deserve?";
    cin>>grade;
    cout<<"What is your age?";
    cin>>age;

    grade++;

    cout<<"Name:"<<lastname+", "+firstname<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Age:"<<age<<endl;

    return 0;
}