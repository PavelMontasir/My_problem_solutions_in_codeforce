#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        bool isunique=1;
        for(int j=i+1;j<str.length();j++)
        {

            if(str[i]==str[j])
            {
                isunique=0;
               break;
            }
        }
        if( isunique==1)
        {
            cnt++;
        }
    }





    if(cnt%2==0)
        cout<< "CHAT WITH HER!"<<endl;
    else
        cout<< "IGNORE HIM!"<<endl;


return 0;
}
