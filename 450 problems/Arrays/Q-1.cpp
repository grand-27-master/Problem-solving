#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    char arr[10000];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=n;i>=0;i--)
    cout<<arr[i];
}
