#ifndef STRINGFUNCTION_H_INCLUDED
#define STRINGFUNCTION_H_INCLUDED

class StringFunction{
private:
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
#endif // STRINGFUNCTION_H_INCLUDED
