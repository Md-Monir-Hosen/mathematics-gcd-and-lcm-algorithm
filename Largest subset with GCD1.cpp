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
int largestGCD1Subset(int a[],int n)
{
    int currentGCD=a[0];
    for(int i=1;i<n;i++)
    {
        currentGCD=gcd(currentGCD,a[i]);
        if(currentGCD==1)
        {
            return n;
        }
    }
    return 0;
}
int main()
{
     int A[] = {2, 18, 6, 3};
    int n = sizeof(A)/sizeof(A[0]);
    cout << largestGCD1Subset(A, n);
    return 0;
}
