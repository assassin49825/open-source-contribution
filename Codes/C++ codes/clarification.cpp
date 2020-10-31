#include<bits/stdc++.h>
using namespace std;
class Node
{
   private:
    int *data;
   public:
       void setValue(int d){*data=d;};
       int getValue(){return *data;};
    Node(int d);
    Node(const Node &source);
    ~Node();
};
Node::Node(int d)
{
    data=new int;
    *data=d;
}
Node::Node(const Node &source)
: Node {*source.data}{
cout << "copy constructor is being called" << endl;
}
void displayNode(Node o)
{
    cout << "Data : " << o.getValue() << endl;;
}
Node::~Node()
{
    delete data;
    cout << "Destructor Freeing data" << endl;
}
int main()
{
    Node obj1{100};
    displayNode(obj1);
    Node obj2{obj1};
    obj2.setValue(1000);
    displayNode(obj2);
    displayNode(obj1);
	return 0;
}
