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
        buffer=new_buffer;
        strlength=new_buffer_length;
		return *this;
    }
    String& String::operator=(const String& cstring)
    {
        char* new_buffer = new char[cstring.strlength];
        strcpy(new_buffer,cstring.buffer);
        buffer=new_buffer;
        strlength=cstring.strlength;
		return *this;
    }
    int String::length()
    {
        return strlength;
    }
    String& String::Lower()
    {
            for(i=0;i<strlength;i++)
            {
                buffer[i]=buffer[i]+32;
            }
            return *this;
    }
    String& String::Upper()
    {

            for(i=0;i<strlength;i++)
            {
                buffer[i]=buffer[i]-32;
            }
            return *this;
    }
    int String::toInt()
    {
       int number=1,sum;
       sum=0;
        for(i=0;i<strlength;i++)
            {
                if((buffer[i]>='0')&&(buffer[i]<='9'))
                {
                    sum=(sum+(buffer[i]-'0')*number);
                    number=number*10;
                }
                else
                break;
            }
            if(i<strlength)
            return -1;
        return sum;
    }
    double String::toDouble()
    {

        return ;
    }
