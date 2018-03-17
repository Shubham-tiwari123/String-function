
#ifndef STRINGFUNCTION_H
#define STRINGFUNCTION_H
#include <iostream>

class StringFunction{
private:
    string::iterator itr;
    stack <char> c;
    string name;
    char a[50];
    int i;
public:
    void acceptData();
    void displayData();
    void removeSpace();
    void removeDuplicate();
    StringFunction(){
        a[0] = 'a';
    }
};

#endif /* STRINGFUNCTION_H */

