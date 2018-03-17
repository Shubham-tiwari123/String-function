#include <iostream>
#include "StringFunction.h"
using namespace std;
int main(){
    StringFunction s;
    cout<<"Enter the string with space";
    s.acceptData();
    /*function to remove the space*/
    s.removeSpace();
    s.displayData();
    cout<<"\nEnter the string with repetition";
    s.acceptData();
    /*function to remove the duplicate values*/
    s.removeDuplicate();
}
