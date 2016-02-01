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
