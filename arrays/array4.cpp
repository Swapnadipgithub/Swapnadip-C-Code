#include<iostream>
#include<climits>
using namespace std;
//Take an array from user of input size(n) and find max & min element.
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
         maxNo=max(minNo,arr[i]);
         minNo=min(minNo,arr[i]);
    }
    cout<<maxNo<<" "<<minNo;
    return 0;
}