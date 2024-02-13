#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
ll findlcm(int a[],int n)
{
  ll ans=a[0];
  for(int i=1;i<n;i++)
  {
      ans = ((a[i]*ans)/(gcd(a[i],ans)));
  }
  return ans;
}
int main()
{
     int arr[] = { 2, 7, 3, 9, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<findlcm(arr, n);
    return 0;
}
