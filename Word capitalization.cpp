#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){

    string str;
    cin>>str;
   // for(int i=0;i<str.size();i++)
     //   str[0]=str[str.size()-1];
    //cout<<str;

   // reverse (str.begin(),str.end());
    //cout<<str;

    int left=0,right=str.length()-1;

    while(left<right)
    {
        swap(str[left],str[right]);
        left++;
        right--;

    }
    cout<<str;

return 0;
}

