#include <iostream>
#include "Logger.h"
/*#define LOG(level,char* str)  Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<str;*/
using namespace std;

int main()
{

    String s="gaurav";
    String s1="-122";
    String s7="-122";
    String s3=s1+s;
    String s4;
    String *s5=new String(50);
    String *s6=new String(50);
    s4="gaurav.sharma";
    split(s4,*s5,*s6,'.');
//   Logger::log(1,s3);
   // Logger::log(1,*s5);
   //  Logger::log(1,*s6);
    int i=s7.toInt();
    return 0;
}
