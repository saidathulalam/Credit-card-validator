#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

bool numstring(const string& s){
    int l=s.length();
    for(int i=0;i<l;i++){
    if(s[i]<'0' || s[i] >'9')
        return false;
    }
    return true;
}
int main(){
    string ccnumber;
    
    cout<<"You can enter 'exit' anytime to quit."<<endl;
    
    while(true){
        
        cout<<"Please enter your credit card number: ";
        cin>>ccnumber;
        
        if(ccnumber=="exit")
            break;
            
        else if(!numstring(ccnumber)){
            cout<<"Bad Input!"<<endl;
            continue;
        }
        
        int l=ccnumber.length();
        int overallsum=0;
        
        
        for(int i=l-2;i>=0;i=i-2){
            int des=((ccnumber[i] - 48)*2);
            if(des>9){
                des=des/10 + des%10;
            }
            overallsum+=des;
        }
        for(int i=l-1;i>=0;i=i-2){
            overallsum+=(ccnumber[i] - 48);
        }
        
        if(overallsum%10==0)
            cout<<"Valid!"<<endl;
        else 
            cout<<"Invalid!"<<endl;
        
        continue;
    }
    return 0;
}