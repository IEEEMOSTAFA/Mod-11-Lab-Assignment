#include<bits/stdc++.h>
using namespace std;
vector<int>even_generator(vector<int>a)
{
    vector<int>ev;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        {
            ev.push_back(a[i]);
        }
    }
    return ev;
}
int main()
{
    vector<int>a={2,4,5,8,9};
    vector<int>ans=even_generator(a);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
