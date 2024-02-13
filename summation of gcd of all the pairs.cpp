#include<bits/stdc++.h>
using namespace std;
#define Max 100001
long long phi[Max],result[Max];
void computeTotient()
{
    phi[1]=1;
    for(int i=2;i<Max;i++)
    {
        if(!phi[i])
        {
            phi[i]=i-1;
            for(int j=(i<<1);j<Max;j+=i)
            {
                if(!phi[j])
                {
                    phi[j]=j;
                }
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
void sumOfGcdPairs()
{
    computeTotient();
    for(int i=1;i<Max;++i)
    {
        for(int j=2;i*j<Max;++j)
        {
            result[i*j]+=i*phi[j];
        }
    }
    for(int i=2;i<Max;i++)
    {
        result[i]+=result[i-1];
    }
}
int main()
{
     sumOfGcdPairs();

    int N = 4;
    cout << "Summation of " << N << " = "
         << result[N] << endl;;
    N = 12;
    cout << "Summation of " << N << " = "
        << result[N] << endl;
    N = 5000;
    cout << "Summation of " << N << " = "
        << result[N] ;

    return 0;
}
