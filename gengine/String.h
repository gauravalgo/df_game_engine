#include <string.h>
#include <iostream>
#include <math.h>
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
    String(int length);
    String(char ch);                  //pamaterised character constructor
    String(const char *cstring);   //paramaterised const character string constructor
    String(const String &str);          //copy constructor
    ~String();                        //destructor

    //assignment operator
    String& operator=(const String& cstring);

    //concating two Strings using += operator
    String& operator+=(const char *cstring);
    String& operator+=(const String& cstring);
    String& operator+(String cstring);

    bool operator<(String cstring);
    bool operator<=(String cstring);
    bool operator>(String cstring);
    bool operator>=(String cstring);
    bool operator==(String cstring);
    bool operator!=(String cstring);

   //String functions
   void clear();
   String& Lower();
   String& Upper();
   int Length() const;
   int toInt();
   double toDouble();
   char *tocharArray();
   friend void split(const String& string, String& firstpart, String& secondpart,const char& splitter);
   //casting operators
   operator const char*();

    //input and output operators
    friend class Logger;
};

