#include<iostream>
using namespace std;
int main(){
int value=1;
int x,n;
cin>>x>>n;
for(int i=0;i<n;i++){
    value=value*x;
}
cout<<value;
return 0;
}
