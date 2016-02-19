#include <string.h>
#include <iostream>
class String
{
    //this is for test
    private:
        int strlength;
        char *buffer;
    public:
    String():strlength(0),buffer(NULL) //Default constructor
    {

    }
    String(char ch);                  //pamaterised character constructor
    String(const char *cstring);   //paramaterised const character string constructor
    String(const String &str);          //copy constructor
    ~String();                        //destructor
    
    //concating two Strings using += operator
    String& operator+=(const char *cstring);
    String& operator+=(const String& cstring);
    String operator+(String cstring);
    
    bool operator<(String cstring);
    bool operator<=(String cstring);
    bool operator>(String cstring);
    bool operator>=(String cstring);
    bool operator==(String cstring);
    bool operator!=(String cstring);
   
   //String functions
   void clear();
   String Lower();
   String Upper();
   int Length();
   
   //casting operators 
   operator const char*();
};

