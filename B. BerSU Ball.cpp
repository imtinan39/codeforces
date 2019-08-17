#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,x,m,y,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr[i]=x;
    }
    sort(arr,arr+n);
    cin>>m;
    int arr1[m];
    for(int i=0;i<m;i++)
    {
        cin>>y;
        arr1[i]=y;
    }
sort(arr1,arr1+m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)

        {
            if(abs(arr1[i]-arr[j])<=1)
            {
                cnt=cnt+1;

                arr[j]=-1000000;
                //arr1[i]=-100000;
                break;

            }
        }
    }
    cout<<cnt<<endl;
}
