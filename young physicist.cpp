#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,sumx=0,sumy=0,sumz=0;
    int a,b,c;
    cin>>n;
     for(int i=0;i<n;i++)
        {
            cin>>a>>b>>c;
              sumx=sumx+a;
              sumy=sumy+b;
              sumz=sumz+c;


        }



if(sumx==0 && sumy==0 && sumz==0)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

return 0;
}
