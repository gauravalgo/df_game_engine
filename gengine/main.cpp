#include <iostream>
#include "Logger.h"
#include "Stack.h"
/*#define LOG(level,char* str)  Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<str;*/
using namespace std;

int main()
{

    String s="gaurav";
    String s1="sharma";
    String s3=s1+s;
    Stack<String> stackString(100);
    try
    {

        stackString.push(String("great"));
        stackString.push(String("wall"));
        stackString.push(String("in"));
       stackString.display();

    }
    catch(const std::exception  &ex)
    {
        std::cerr<<"Exception"<<ex.what()<<std::endl;
    }
    return 0;
}
