/*
#include<bits/stdc++.h>
using namespace std;
bool found =false;
int main()
{
    int n;
    cin>>n;
    vector<int>a1(n);
    for(int i=0;i<n;i++)
    cin>>a1[i];
    int k;
    cin>>k;
    vector<int>a2(k);
    for(int j=0;j<k;j++)
        cin>>a2[j];



       for(int i=0;i<n;i++)
       {
           for(int j=0;j<k;j++)
           {
               if(a1[i]==a2[j])
                found =true;
                break;
           }

       }
       if(found)
        cout<<"Yes";
       else
        cout<<"NO";
       return 0;
}
*/
//       /////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
bool isSubset(int a1[],int a2[],int m,int n)
{
    sort(a1,a1+m);
    sort(a2,a2+n);
    int i=0,j =0;
    while (i <m && j<n)
    {
        if (a1[i] < a2[j])
        {
            return false;
        }
        if (a1[i] == a2[j])
        {
            i++;
        }
        j++;
    }
    if (i <m)
    {
        return false;
    }
    return true;
}
int main()
{
    int m,n;
    cin>>m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin>>a[i];
    cin>>n;
    int a2[n];
    for (int i=0; i<n; i++)
    {
        cin >> a2[i];
    }
    if (isSubset(a, a2,m,n))

        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}
