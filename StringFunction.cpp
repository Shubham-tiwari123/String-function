#include <iostream>
#include "StringFunction.h"
using namespace std;

void StringFunction::acceptData(){
    int flag =0;
    cout<<"\nEnter the string:-";
    getline(cin,name);    
}
void StringFunction::displayData(){
    cout<<endl;
    for(itr = name.begin();itr !=name.end();++itr)
        cout<< *itr;
}
void StringFunction::removeSpace(){
   name.erase(remove(name.begin(), name.end(), ' '), name.end());
}
void StringFunction::removeDuplicate(){
    int flag =1;
    int z=0;
    for(i = 0;i<name.length();i++){
        cout<<name[i]<<"\t";
        c.push(name[i]);
    }
    cout<<endl;
    while(!c.empty()){
        if(a[z]=='a'){
            a[z]=c.top();
            c.pop();
            z++;
        }
        else{
            for(i=z;i>=0;i--){
                if(a[i] == c.top()){
                    flag =0;
                }
            }
            if(flag==0){
                c.pop();
                flag =1;
            }
            else{
                a[z]=c.top();
                c.pop();
                z++;
                flag=1;
            }
        }
    }
    cout<<endl;
    for(i=z;i>=0;i--)
        cout<<a[i];
    
}
