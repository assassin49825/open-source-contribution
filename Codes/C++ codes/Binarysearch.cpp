#include<iostream>
#include<algorithm>
int binarySearch(int arr[],int start,int last,int x)
{
    while(last>=start)
    {
        int mid{start+(last-start)/2};
        if(arr[mid]==x)
            return 1;
        if(arr[mid]>x)
        {
            last=mid-1;
            mid=start+(last-start)/2;
        }
        else
        {
            start=mid+1;
            mid=start+(last-start)/2;
        }
    }
    return -1;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << binarySearch(arr,0,n-1,x);
    return 0;
}
