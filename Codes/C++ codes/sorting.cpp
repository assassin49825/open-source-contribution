#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;
cout<<"Enter the no. of element to be entered\n";
cin>>n;
int arr[n];
cout<<"Enter the elements\n";
for(int i=0;i<n;++i){
    cin>>arr[i];
}
cout<<"Numbers arranged in ascending order\n";
sort(arr,arr+n);

for(int i=0;i<n;++i){
    cout<<arr[i]<<" ";
}
return 0;
}
