
#include<bits/stdc++.h>
using namespace std;
int n,k;
bool found =false;
vector<int>merge_sort(vector<int>a)
{
 //base case

if(a.size()<=1)
{
    return a;
}
int mid=a.size()/2;
vector<int>b;
vector<int>c;
for(int i=0;i<mid;i++)
    b.push_back(a[i]);

for(int i=mid;i<a.size();i++)

    c.push_back(a[i]);
vector<int>sorted_b = merge_sort(b);
vector<int>sorted_c = merge_sort(c);

vector<int>sorted_a;
int idx1 = 0;

int idx2 = 0;
for(int i=0;i<a.size();i++)
{
    if(idx1 == sorted_b.size())
    {
        sorted_a.push_back(sorted_c[idx2]);
        idx2++;
    }
    else if(idx2 == sorted_c.size())
    {
        sorted_a.push_back(sorted_b[idx1]);
        idx1++;
    }
    else if(sorted_b[idx1]<sorted_c[idx2])
    {
        sorted_a.push_back(sorted_b[idx1]);
        idx1++;
    }
    else
    {
        sorted_a.push_back(sorted_c[idx2]);
        idx2++;
    }
}
//for(int i=0;i<sorted_a.size();i++)
    //cout<<sorted_a[i]<< " ";
//cout<<"\n"<<"\n";
if(sorted_a.size()==n)
{
       int i =0,j=n-1;
       while(i<j)
       {
           if((sorted_a[i]+sorted_a[j])>k)
            j--;
           else if((sorted_a[i]+sorted_a[j])<k)
            i++;
           else
           {
               found =true;
               break;
           }
       }
    cout<<endl;
}
return sorted_a;


}
int main()
{

  int n,k;
  int countt =0;
  int l;
  cin>>n;
  vector<int>a(n);
  for(int j=0;j<n;j++)
  {
      cin>>a[j];
  }
  cin>>k;
  vector<int>a2=merge_sort(a);
  l=a2.size()-1;
  int i=0;
  while(i<l)
  {
      if(a2[i]+a2[l]==k)
      {
       countt++;
      i++;
      l--;
      }
      else if(k<(a2[i]+a2[l]))
      {
          l--;
      }
      else
      {
          i++;
      }

  }
  cout<<countt;
  return 0;
}

/*
  int n,k;
  cin>>n;
  int l;
  vector<int>a(n);
  for(int j=0;j<n;j++)
    cin>>a[j];
  vector<int>a2=merge_sort(a);
  l=a2.size()-1;
  cin>>k;
  int i=0;
  int countt=0;
  while(i<l)
  {
      if((a2[i]+a2[l])==k)
      {
          countt++;
          i++;
          l--;
      }
      else if(k<(a2[i]+a2[l]))
      {
          l--;
      }
      else
      {
          i++;
      }
  }
  cout<<countt;
  return 0;

}
*/
// //////////////////////////////////////////

