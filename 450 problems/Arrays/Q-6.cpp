#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;

    int a[n],b[m];

    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<endl;

    for(int j=0;j<m;j++)
    cin>>b[j];

    int cnt=0;
    int temp1=a[0],temp2=b[0];
    for(int k=0;k<n;k++)
    {
        if(temp1==temp2)
        cnt++;
    }

    cout<<cnt;
}
