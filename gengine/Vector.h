template<class T>
class Vector
{

public:
        Vector(int n)
        {
                pointer_T = new T[5];
                size = n;
                current_size=0;
                Multiplication_factor=5;
        }
        void push_back(const T &t)
        {
                if(current_size<size)
                {
                        pointer_T[current_size++]= t;
                }
                else
                {
                        T* temp_container=new T[size*multiplication_factor];
                        for(i=0;i<size;i++)
                        {
                                temp_container[i]=pointer_T[i];
                        }
                        current_size=size;
                        size=size*multiplication_factor;
                        ~Vector();
                        pointer_T=temp_container;
                        pointer_T[current_size++]= t;
                }
        }
        T& pop_up()
        {
                if(current_size==0)
                        throw "unable to pop upsize is zero";
                return pointer_T[current_size--];
        }
        ~Vector()
        {
                delete []pointer_T;
        }
private:
        int size;
        int Multiplication_factor;
        int current_size;
        T* pointer_T;
};


