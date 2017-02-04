template<class T>
class ReusablePool
{
public:
        bool add_object()
        {
                //if the object is already in pool give the object from pool

                //else create an object
        }
private:
        int num_of_objects;
        Container c;
        ReusablePool();
        static Container<T>* getinstance();
};

