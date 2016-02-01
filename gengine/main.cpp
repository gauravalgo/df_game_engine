#include <iostream>
#include "String.h"
#include "Logger.h"

using namespace std;

int main()
{

    String s;
    cout << "Hello world!" << endl;
    Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<"this is great"<<endl;
    return 0;
}
