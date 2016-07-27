#include <iostream>
#include "Logger.h"
/*#define LOG(level,char* str)  Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<str;*/
using namespace std;

int main()
{

    String s="gaurav";
    String s1="sharma";
    String s3="-12.534";
    String s4=s1+s;
    double d=s3.toDouble();
    Logger::log(1,s3);
    return 0;
}
