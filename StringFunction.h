
#ifndef STRINGFUNCTION_H
#define STRINGFUNCTION_H
#include <iostream>

class StringFunction{
private:
    char a[50];
    int i;
    int count;
    char data;
    int num;
    int flag[10];
    int flag1 =0;
    unsigned currentMax = 0;
    unsigned maax = 0;
    unsigned minm = 0;
    int k;
public:
    void acceptData();
    void displayData();
    void removeSpace();
    void removeDuplicate();
    void mostOccurance();
    void kthNonRepeating();
    void subString();
    StringFunction(){
        a[0] = 'a';
    }
};

#endif /* STRINGFUNCTION_H */


