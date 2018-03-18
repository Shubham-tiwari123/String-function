#ifndef STRINGFUNCTION_H_INCLUDED
#define STRINGFUNCTION_H_INCLUDED

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
public:
    void acceptData();
    void displayData();
    void removeSpace();
    void removeDuplicate();
    void mostOccurance();
    StringFunction(){
        a[0] = 'a';
    }
};

#endif // STRINGFUNCTION_H_INCLUDED
