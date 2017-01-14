/*
    templatize the class to make generic
*/
#include <stdexcept>
#include <iostream>
#include <cstdio>
#include <typeinfo>
template<class T>
class Stack
{
    private:
        int top;
        T *items;
    public:
        Stack();
        Stack(int top);
        ~Stack();
        int maxstack(void);
        void push(T item);
        bool isempty(void);
        T pop(void);
        void display();
 std::ostream& operator<<(T s);
        bool operator!=(T number);
        bool operator==(T number);
};