#include<bits/stdc++.h>
using namespace std;
int CountPairs(int n)
{
    int k=n;
    int imin=1;
    int ans=0;
    while(imin<=n)
    {
        int imax=n/k;
        ans+=k*(imax-imin+1);
        imin=imax+1;
        k=n/imin;
    }
    return ans;
}
int main()
{
     cout << CountPairs(1) << endl;
    cout << CountPairs(2) << endl;
    cout << CountPairs(3) << endl;
    return 0;
}
