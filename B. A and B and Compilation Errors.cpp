#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,sum1=0,sum2=0;
    cin>>n;
    long long a[n];
    long long b[n-1];
    long long c[n-2];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(long long j=0;j<n-1;j++)
    {
        cin>>b[j];
        sum1=sum1+b[j];
    }
    for(long long k=0;k<n-2;k++)
    {
        cin>>c[k];
        sum2=sum2+c[k];
    }
    cout<<sum-sum1<<endl;
    cout<<sum1-sum2<<endl;

}
