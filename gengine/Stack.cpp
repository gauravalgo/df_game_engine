#include "Stack.h"
#include "String.h"
template<class T>
Stack<T>::Stack()
{
    top=0;
    items=new T[top];
}
template<class T>
Stack<T>::Stack(int top)
{
    top=this->top;
    items=new T[top];
}
template<class T>
Stack<T>::~Stack()
{
    top=0;
    delete[] items;
}
template<class T>
void Stack<T>::push(T item)
{
    items[top]=item;
    top++;
}
template<class T>
T Stack<T>::pop(void)
{
    T save_item;
    if(isempty()==true)
        throw std::out_of_range("Stack<T> empty Stack");
    save_item=items[top];
    top--;
    return save_item;
}
template<class T>
int Stack<T>::maxstack(void)
{
    return top;
}
template<class T>
bool Stack<T>::isempty(void)
{
    if(top==0)
    {
        return true;
    }
return false;
}
template<class T>
void Stack<T>::display()
{
        int max=maxstack();
        int i=0;
        while(i<=max)
        {
            std::cout<<"the "<<i<<"th element of the stack is "<<items[i]<<std::endl;
            i++;
        }
}
/* template instantion of various types*/
template class Stack<int>;
template class Stack<String>;
template class Stack<float>;
template class Stack<char>;
template class Stack<double>;
