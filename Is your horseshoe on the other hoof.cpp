#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    set<int> s={a,b,c,d};
     int cnt=s.size();
     cout<<4-cnt;



return 0;
}

