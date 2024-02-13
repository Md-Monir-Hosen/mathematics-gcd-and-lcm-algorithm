#include<bits/stdc++.h>
using namespace std;
int findvalue(int a,int b,int c)
{
    int g=__gcd(b,c);
    return (a*g)/__gcd(a,g);
}
int main()
{
    int x = 30, y = 40, z = 400;
    cout << findvalue(x, y, z);
    return 0;
}
