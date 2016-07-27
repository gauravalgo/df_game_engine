/*Allocator designs for the following basic operations*/
#include<new>
typedef unsigned int uint;
namespace Deframentation
{
class Allocator
{
public:
    ~Allocator ();
    Allocator (uint unit_size, uint block_size =16);
    Allocator (uint unit_size, uint block_size, bool debug);
    void* allocate ();
    void deallocate (void*);
    bool  is_debug () const
    {
        return _debug;
    }
private:
    struct Free
    {
        Free* next;
    };
    uint _requested_size;    // memory units requested for allocation
    uint _allocated_size;    // memory units to be allocated
    uint _block_size;        // The number of units in blocks
    void** _allocated_blocks;    // Array of pointers to blocks
    uint _num_allocated_blocks;  // Number of allocated blocks
    Free* _free;                 // Linked list of free units
    bool _debug;

    void more() throw(char*);
    void* debug_check(void*&) throw(char*);
    void* debug_correct(void*&);
};

};

