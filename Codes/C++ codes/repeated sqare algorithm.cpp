#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,n;
    int value=1;
    cin >> x >> n;
    for(int i=0;i<(n-1)/2;i++){
        value=value*pow(x,2);
    }
    cout<<value*x;
    return 0;
}
