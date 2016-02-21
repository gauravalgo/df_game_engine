#include <iostream>
#include "Logger.h"
/*#define LOG(level,char* str)  Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<str;*/
using namespace std;
int main()
{

    String s="gaurav";
    String s1="sharma";
    String s3=s1+s;
    Logger::LOG(s);
    cout <<"Hello world!" << endl;
    Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<"this is great"<<endl;
    return 0;
}
