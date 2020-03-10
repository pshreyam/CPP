#include <iostream>
using namespace std;

class Node
{
private:
    int info;
    Node *next;
    friend class LinkedList;
};

class LinkedList
{
private:
    Node *HEAD,*TAIL;
public:
    LinkedList();
    ~LinkedList();
    void addToHead(int ele);
    void addToTail(int ele);
    void add(int ele,int pre_element);
    void removeFromHead();
    void removeFromTail();
    void _remove(int ele);
    bool _search(int ele);
    void traverse();
    Node* retreive(int ele);
};

LinkedList::LinkedList()
{
    HEAD=TAIL=NULL;
}

LinkedList::~LinkedList(){}

void LinkedList::addToHead(int ele)
{
    Node *newNode=new Node();
    newNode->info=ele;
    newNode->next=HEAD;
    HEAD=newNode;
    if (TAIL==NULL)
    {
        TAIL=newNode;
    }
}

void LinkedList::addToTail(int ele)
{
    Node *newNode=new Node();
    newNode->info=ele;
    newNode->next=NULL;
    TAIL->next=newNode;
    TAIL=newNode;
    if (HEAD==NULL)
    {
        HEAD=newNode;
    }
}

void LinkedList::add(int ele,int pre_element)
{
    Node *newNode=new Node();
    newNode->info=ele;
    Node* pred=retreive(pre_element);
    newNode->next=pred->next;
    pred->next=newNode;
}

void LinkedList::removeFromHead()
{
    Node* nodeToDelete=HEAD;
    HEAD=HEAD->next;
    delete nodeToDelete;
}

void LinkedList::removeFromTail()
{
    Node *nodeToDelete=HEAD,*temp;
    while (nodeToDelete!=TAIL)
    {
        temp=nodeToDelete;
        nodeToDelete=nodeToDelete->next;
    }
    temp->next=NULL;
    delete nodeToDelete;
    cout<<"Node not found."<<endl;
}

bool LinkedList::_search(int ele)
{
    Node* temp=HEAD;
    while (temp!=NULL)
    {
        if (temp->info==ele)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

Node* LinkedList::retreive(int ele)
{
    Node* temp=HEAD;
    while (temp!=NULL)
    {
        if (temp->info==ele)
        {
            return temp;
        }
        temp=temp->next;
    }
    cout<<"Node not found."<<endl;
}

void LinkedList::traverse()
{
    Node *temp=HEAD;
    while (temp!=NULL)
    {
        cout<<temp->info<<endl;
        temp=temp->next;
    }
}

int main()
{
    LinkedList l1;
    l1.addToHead(5);
    l1.addToHead(7);
    l1.addToTail(8);
    l1.addToTail(6);
    l1.addToHead(9);
    cout<<"Is 21 present in the linked list :: "<<l1._search(21)<<endl;
    l1.add(21,7);
    l1.traverse();
    cout<<"Is 7 present in the linked list :: "<<l1._search(7)<<endl;
    cout<<"Is 10 present in the linked list :: "<<l1._search(10)<<endl;
    cout<<"Is 21 present in the linked list :: "<<l1._search(21)<<endl;
    l1.removeFromHead();
    l1.traverse();
    l1.removeFromTail();
    l1.traverse();
    return 0;
}
