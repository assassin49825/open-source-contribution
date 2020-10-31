#include <bits/stdc++.h>

using namespace std;
void sort_stack(stack<int> &v);
void insert_stack(stack<int> &v, int temp);
void sort_stack(stack<int> &v)
{
    if(v.size()==1)
        return;
    int temp=v.top();
    v.pop();
    sort_stack(v);
    insert_stack(v,temp);
}
void insert_stack(stack<int> &v, int temp)
{
    if(v.size()==0 || v.top()<=temp)
    {
        v.push(temp);
        return;
    }
    int val=v.top();
    v.pop();
    insert_stack(v,temp);
    v.push(val);
}
void printstack(stack<int>v)
{
    while(!v.empty());
    {
        cout << v.top() << " ";
        v.pop();
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int>s;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        s.push_back(x);
    }
    stack<int>v;
    for(int i:s)
    {
        v.push(i);
    }
    sort_stack(v);
    printstack(v);
    return 0;
}
