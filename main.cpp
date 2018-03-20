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
    /*fuction to count the most occurance character*/
    s.mostOccurance();
    /*fuction to display kth non repeting characters*/
    s.kthNonRepeating();
    /*function to count number of substrings*/
    s.subString();
}

