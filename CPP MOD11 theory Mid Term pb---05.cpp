/*#include<bits/stdc++.h>
using namespace std;
class node
{
public:

    int data;
    node*next;
};
class LinkList
{
    public:
    int sz;
   node*head;

   LinkedList()
   {
       head=NULL;
       sz=0;
   }
    node*CreateNewNode(int value)
    {
        node*newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }


    void InsertAtHead(int value)
    {
        sz++;
        node*a=CreateNewNode(value);
        if(head==NULL)
        {
         head =a;
         return ;
        }
        a->next=head;
        head=a;

    }
    void Traverse()
    {
        node*a1=head;
        while(a1!=NULL)
        {
            cout<<a1->data<<"\n";
            a1=a1->next;
        }
    }
    int searchDistinct_value(int num)
    {
        node*a1=head;
        int index=0;
        while(a1!=NULL)
        {
            if(a1->data==num)return index;
            a1=a1->next;
            index++;
        }
        return -1;
    }




    int getSize()
    {
      return sz;
    }

    int getvalue(int n)
    {
        if(n<0 || n>sz)
        {
            cout<<"Wrong Index input \n";
            return -1;
        }
        node*a2=head;
        int 2nd_index=0;
        while(2nd_index!=n)
        {
            a2=a2->next;
            2nd_index++;
        }
        return a2->data;
    }

    void printReverse_1(node*a)
    {
        if(a==NULL)return;
        printReverse_1(a->next);
        cout<<a->data<<" ";
    }
    void printReverse()
    {
        printReverse_1(head);
        cout<<endl;
    }
    void swapFirst()
    {
      if(sz<2)return;
      node*a=head;
      node*b=a->next;
      int tmp;
      tmp=a->data;
      a->data=b->data;
      b->data=tmp;
    }
};
int main()
{
    LinkList l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);

    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

}
*/
// /////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};
class link_list
{
public:
    int sz;
    node* head;
    link_list()
    {
        head=NULL;
        sz=0;
    }
    node* creat_new_node(int vlue)
    {
        node* newnode=new node;
        newnode->data=vlue;
        newnode->next=NULL;
        return newnode;
    }
    void insertAthead(int valu)
    {
        sz++;
        node* a =creat_new_node(valu);
        if(head==NULL)
        {
            head=a;
            return ;
        }
        a->next=head;
        head=a;
    }
    void travers()
    {
        node* a1=head;
        while(a1!=NULL)
        {
            cout<<a1->data<<" \n";
            a1=a1->next;
        }
    }
    int search_for_a_single_value(int num)
    {
        node* a1=head;
        int index=0;
        while(a1!=NULL)
        {
            if(a1->data==num)return index;
            a1=a1->next;
            index++;
        }
        return -1;
    }

    int get_sizeOf_linklist1()
    {
        return sz;
    }
    int get_value(int n)
    {
        if(n<0 || n>sz)
        {
            cout<<" worng index input error"<<endl;
            return-1;
        }
        node* a=head;
        int crindx=0;
        while(crindx!=n)
        {
            a=a->next;
            crindx++;
        }
        return a->data;
    } void reverse_print2(node* a)
    {
        if(a==NULL)return;
        reverse_print2(a->next);
        cout<<a->data<<" ";
    }
    void reverse_print()
    {
        reverse_print2(head);
        cout<<"\n";
    }
    void swap_first()
    {
        if(sz<2)return;
        node* a=head;
        node* b=a->next;
        int temp;
        temp=a->data;
        a->data=b->data;
        b->data=temp;
    }
};
int main()
{
    /*
    link_list l;
    cout<<l. get_sizeOf_linklist1()<<"\n";
    l.insertAthead(11);
    l.insertAthead(22);
    l.insertAthead(22);
    l.reverse_print();
    l.insertAthead(33);
    l.insertAthead(63);
    l.insertAthead(83);
    cout<<l. get_sizeOf_linklist1()<<"\n";
    cout<< l.get_value(2)<<"\n";
    l.travers();
    l.reverse_print();
    l.swap_first();
    l.travers();
    return 0;
    */

     link_list l;
    cout<<l. get_sizeOf_linklist1()<<"\n";
    l.insertAthead(5);
    cout<<l. get_sizeOf_linklist1()<<"\n";
    l.insertAthead(6);
    l.insertAthead(30);
     cout<<l. get_sizeOf_linklist1()<<"\n";
     l.insertAthead(20);
     l.insertAthead(30);
    cout<< l.get_value(2)<<"\n";
    cout<< l.get_value(6)<<"\n";

    l.reverse_print();
    l.travers();
    l.swap_first();
    l.travers();
    l.reverse_print();

}
