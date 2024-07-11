#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
     for(int i=0;i<t;i++)
        {
            int n,k;
            cin>>n>>k;
            int arr[n+1];
            for(int j=0;j<n;j++)
            {
                cin>>arr[j];
            }
            int cnt1=0,cnt2=0;
            if(k==1)
            {
                cnt1=1;
            }
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    cnt2=1;
                    break;
                }
            }

            if(cnt1==1 && cnt2==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";

        }


return 0;
}

