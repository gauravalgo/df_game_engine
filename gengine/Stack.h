class Stack
{
    private:
        int top;
        int *items;
    public:
        Stack(int top);
        ~Stack();
        int maxstack(void);
        void push(int item);
        int pop(void);
};
