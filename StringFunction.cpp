#include <iostream>
#include "StringFunction.h"
#include <string>
#include <stack>
#include <algorithm>
#include <map>
using namespace std;
string::iterator itr;
stack <char> c;
map<int,char> m;
map<int,char>::iterator it;
string name;
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
void StringFunction::mostOccurance(){
    
    for(i=0;i<10;i++)
        flag[i]=0;
    
    for(i=0;i<name.length();i++){
        count=1;
        for(int j=i+1;j<name.length();j++){
            if(name[i]==name[j]){
                if(flag[j]!=1){
                    count++;
                    flag[j]=1;
                    flag1 =1;
                }
            }
        }
        if(flag1==1){
            num = count;
            data = name[i];
            m.insert(pair<int,char>(count,name[i]));
            flag1 = 0;
        }
    }
    if(m.empty()){
        cout<<"no repeated word";
    }
    else{
        for(it = m.begin();it!=m.end();it++){
            if (it ->first > currentMax)
            {
                maax = it->first;
            }
        }
        cout<< m.find(maax)->second;
    }
}

void StringFunction::kthNonRepeating(){
    int j,count1=0;
    cout<<"\nEnter the k value:-";
    cin>>k;
    for(i=0;i<10;i++)
        flag[i]=0;
    for(i=0;i<name.length();i++){
       count=1;
       for(j=i+1;j<=name.length();j++){
           if(name[i]==name[j]){
               if(flag[j]!=1){
                    count=0;
                    flag[j]=1;
                    break;
                }
            }
           else if(flag[i]==1){
               count = 0;
               break;
           }
        }
       if(count==1 && count1<k){
           cout<<name[i];
           count1++;
       }
       flag1=0;
    }   
}

void StringFunction::subString(){
    int length,ans;
    cout<<"\nEnter length of substrings:-";
    cin>>length;
    ans = length*(length+1)/2;
    cout<<"\nNumber of substrings possible:-"<<ans;
}
