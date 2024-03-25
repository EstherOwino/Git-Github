#include <iostream>

using namespace std;

int main()
   {

    int marks;
    cout << "Grading system of Dedan Kimathi Univeristy" << endl;
    cout<<"Enter your marks: ";
    cin>>marks;
    switch(marks / 10)
    {
    case 'A':
        cout<<"Your grade is A";
        break;
    case 'B':
        cout<<"Your grade is B";
        break;
    case 'C':
        cout<<"Your grade is C";
        break;
    case 'D':
        cout<<"Your grade is D";
        break;
    default:
        cout<<"You have a Fail";
        cout<<"\n";
        break;

    }
    return 0;
}
