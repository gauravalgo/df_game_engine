template<class T,const int N>
class Array
{
    Array();
    ~Array();
    enum
    {
        SIZE=N
    };
    typedef T                   value_type;
    typedef T&                  refrence;
    typedef const T&           const_refrence;
    typedef T*                  pointer;
    typedef const T*            const_pointer;
    typedef T*                  iterator;

};
