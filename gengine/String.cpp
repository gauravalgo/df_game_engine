//testing git repository
#include "String.h"
String::String(char ch)
{

    strlength=1;
    buffer =new char[strlength];
    buffer[0]=ch;
}
String::String(const char *cstring="")
{
    strlength=strlen(cstring);
    buffer= new char[strlength];
    strcpy(buffer,cstring);
}
String::String(const String &str)
{
    strlength=str.strlength;
    buffer= new char[strlength];
    strcpy(buffer,str.buffer);
}
String::~String()
{
    strlength=0;
    delete[] buffer;
}
//operator overloading
String& String::operator+=(const char* cstring)
    {
        int new_buffer_length =strlen(cstring)+strlength;
        char* new_buffer = new char[new_buffer_length];
        strcpy(new_buffer,buffer);
        strcat(new_buffer,cstring);
        delete[] buffer;
        buffer=new_buffer;
        strlength=new_buffer_length;
		return *this;
    }
String& String::operator+=(const String& cstring)
    {
        int new_buffer_length =strlen(cstring.buffer)+strlength;
        char* new_buffer = new char[new_buffer_length];
        strcpy(new_buffer,buffer);
        strcat(new_buffer,cstring.buffer);
        delete[] buffer;
        buffer=new_buffer;
        strlength=new_buffer_length;
		return *this;
    }
String& String::operator+(String cstring)
    {
        int new_buffer_length =strlen(cstring.buffer)+strlength;
        char* new_buffer = new char[new_buffer_length];
        strcpy(new_buffer,buffer);
        strcat(new_buffer,cstring.buffer);
        delete[] buffer;
        buffer=new_buffer;
        strlength=new_buffer_length;
		return *this;
    }
