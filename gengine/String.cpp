#include "String.h"
String::String(int length)
{

    buffer =new char[length];
    int i;
    for(i=0;i<length;i++)
    {
        buffer[i]='\0';
    }
    strlength=length;
}
String::String(char ch)
{

    strlength=2;
    buffer =new char[strlength];
    buffer[0]=ch;
    buffer[1]='\0';
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
    int String::Length() const
    {
        return strlength;
    }
    String& String::Lower()
    {
        int i;
        for(i=0;i<strlength;i++)
        {
            buffer[i]=buffer[i]+32;
        }
    return *this;
    }
    String& String::Upper()
    {
            int i;
            for(i=0;i<strlength;i++)
            {
                buffer[i]=buffer[i]-32;
            }
            return *this;
    }
    int String::toInt()
    {
       int number=1,sum,i;
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
        /*yet to be implemented*/
        return -1;
    }
    void split(const String& string, String& firstpart, String& secondpart,const char& splitter)
    {
       int i=0;
       int j=0;
        while(i<string.Length()&&string.buffer[i]!=splitter)
        {
            firstpart.buffer[j++]=string.buffer[i];
            i++;
        }
        i++;
        j=0;
        while(i<string.Length())
        {

           secondpart.buffer[j++]=string.buffer[i++];
        }
    }
char *String::tocharArray()
{
            return buffer;
    }
String::operator const char*()
{
    /*Logger::log(1,"operator user defined");*/
    return buffer;
}
bool String::operator==(String cstring)
{
    if(strcmp(cstring.buffer,buffer)==0)
    return true;
    else
    return false;
}
bool String::operator!=(String cstring)
{
    if(strcmp(cstring.buffer,buffer)==0)
    return false;
    else
    return true;
}
std::ostream&  operator<<(std::ostream& out,String s)
{
	out<<s.tocharArray();
	return out;
}
