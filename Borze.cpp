#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s;
     for(int i=0;i<s.length();i++)
        {

             if(s[i]=='.')
                s2 +='0';
             if(s[i]=='-' && s[i+1]=='.'){
                s2 += '1';
                i++;
             }
             if(s[i]=='-' && s[i+1]=='-'){
                s2 +='2';
                i++;
             }

        }
        cout<<s2;



return 0;
}

