#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
void printList(Node *n)
{
    while(n!=nullptr)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
void addAfter(Node *pre_ref,int main_data)
{
    Node *new_data = new Node();
    new_data->data = main_data;
    new_data->next = pre_ref->next;
    pre_ref->next = new_data;
}
void push(Node **head_ref,int main_data)
{
    Node *new_data = new Node();
    new_data->data = main_data;
    new_data->next = *head_ref;
    *head_ref = new_data;
}
void append(Node **head_ref,int main_data)
{
    Node *new_data = new Node();
    Node *last = *head_ref;
    new_data->data = main_data;
    new_data->next = NULL;
    if(*head_ref == nullptr)
    {
        *head_ref = new_data;
        return;
    }
    while(last->next!=NULL)
        last = last->next;

    last->next = new_data;
    return;
}
void delete_key(Node **head,int x)
{
    Node *temp = *head;
    Node *prev;
    if(x==1)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    else{
            int a=x-1;
    while(a!=0)
    {
        prev = temp;
        temp = temp->next;
        a--;
    }

    prev->next = temp->next;

     free(temp);
    }
}
 void return_element(Node **head_ref,int position)
    {
        Node *temp = *head_ref;
        int i=0;
        if(position==1)
        {
            cout << temp->data << endl;
            return;
        }
        for(i=1; i<position; i++)
        {
            temp = temp->next;
        }
        cout << temp->data << endl;
        return;
    }

int main()
{
    Node *head = nullptr;
    append(&head,0);
    append(&head,1);
    append(&head,3);
    addAfter(head->next,2);
    append(&head,4);
    append(&head,5);
    delete_key(&head,1);
    return_element(&head,2);

    printList(head);
    return 0;

}
