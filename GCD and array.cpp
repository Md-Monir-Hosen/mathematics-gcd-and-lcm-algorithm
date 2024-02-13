#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int findgcd(int a[],int n)
{
    int result=a[0];
    for(int i=1;i<n;i++)
    {
        result=gcd(a[i],result);
        if(result==1)
        {
            return 1;
        }
    }
    return result;
}
int main()
{
     int arr[] = { 2, 4, 6, 8, 16 };
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << findgcd(arr, n) << endl;
  return 0;
}
