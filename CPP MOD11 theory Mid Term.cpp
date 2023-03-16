#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        if(x>n)
        {
            cout<<"X is geter than n that is wrong input";
            return -1;
        }
        else
        {
            a[x-1]=x;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            cout<<i+1;
    }
    return 0;
}
