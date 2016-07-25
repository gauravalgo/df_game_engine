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
	Head=null;
	current=null;

}
template<class T>
LinkList<T>*::alloc_node()
{
	return ::operator new(sizeof(LinkList<T>));
}
template<class T>
LinkList<T>::~LinkList()
{
	LinkList<T>* temp,*temp_t;
	temp=Head;
	while(temp->next!=null)
	{
		temp_t=temp;
		temp=temp->next;
		::operator delete(temp_t);
	}
}
template<class T>
void LinkList<T>::insert(T& item)
{
	
	current=alloc_node();
	current->data=item;
	current->next=null;
}
template<class T>
void LinkList<T>::Traverse()
{
	LinkList<T>* temp;
	temp=Head;
	while(temp->next!=null)
	{
		cout<<temp->data<<endl;
	}
}
void f()
{
	LinkList<String> ll;
	ll.insert(String("gaurav"));
	ll.insert(String("sharma"));
	ll.insert(String("arshad"));
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
	g();
}
