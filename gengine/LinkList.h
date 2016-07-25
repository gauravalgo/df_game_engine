// gs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "String.h"

using namespace std;

template<class T>
class LinkList
{
	
	private:
	T data;
	LinkList<T> *current;
	LinkList<T> *Head;
	public:
	void insert(T& item);
	LinkList<T>* alloc_node();
	void Traverse();
	LinkList();
	~LinkList();
	
};


template<class T>
LinkList<T>::LinkList()
{
	Head=NULL;
	current=NULL;

}
template<class T>
LinkList<T>* LinkList<T>::alloc_node()
{
	return reinterpret_cast<LinkList<T>*>(::operator new(sizeof(LinkList<T>)));
}
template<class T>
LinkList<T>::~LinkList()
{
	LinkList<T>* temp,*temp_t;
	temp=Head;
	while(temp->current!=NULL)
	{
		temp_t=temp;
		temp=temp->current;
		::operator delete(temp_t);
	}
}
template<class T>
void LinkList<T>::insert(T& item)
{
	
	if(Head==NULL)
	{
		current=alloc_node();
		Head=current;
		
	}
	else
	{
		current->current=alloc_node();
		current=current->current;
	}
		current->data=item;
		current->current=NULL;
		
}
template<class T>
void LinkList<T>::Traverse()
{
	LinkList<T>* temp;
	temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->current;
	}
}
void f()
{
	LinkList<int> ll;
	int i=1;
	ll.insert(i);
	ll.insert(i);
	ll.insert(i);
	ll.Traverse();
}
void g()
{
	LinkList<String> ll;
	ll.insert(String("gaurav"));
	ll.insert(String("sharma"));
	ll.insert(String("arshad"));
	ll.Traverse();
}
	int _tmain(int argc, _TCHAR* argv[])
{
	f();
	//g();
	getchar();
}
	


