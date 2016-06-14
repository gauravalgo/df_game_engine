Stack::Stack(int top)
{
    top=this->top;
    items=new int[top];
}
Stack::~Stack()
{
    top=0;
    delete[] items;
}
void Stack::push(int item)
{
    items[top]=item;
    top++;
}
int Stack::pop(void)
{
    int save_item;
    save_item=items[top];
    top--;
    return save_item;
}
int Stack::maxstack(void)
{
    return top;
}
