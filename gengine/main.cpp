#include <iostream>
#include "Logger.h"
using namespace std;
#define LOG(level,char* str)  Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<str;
int main()
{
    cout << "Hello world!" << endl;
    Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<"this is great"<<endl;
    return 0;
}
