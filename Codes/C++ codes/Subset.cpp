#include <bits/stdc++.h>

using namespace std;
void subset(int ones,int zeroes,int n,string output)
{
    if(n==0)
    {
        cout << output << " ";
        return;
    }
    if(zeroes==ones)
    {
        string output1=output;
       output1.push_back('1');
       subset(ones+1,zeroes,n-1,output1);
    }
     if(zeroes<ones)
    {
       string output1=output;
       output1.push_back('1');
       string output2=output;
       output2.push_back('0');
       subset(ones+1,zeroes,n-1,output1);
       subset(ones,zeroes+1,n-1,output2);
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int ones=0;
    int zeroes=0;
    string output="";
    subset(ones,zeroes,n,output);
    return 0;
}
