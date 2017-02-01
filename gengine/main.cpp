#include <iostream>
#include "Logger.h"
#include "LinkList.h"
/*#define LOG(level,char* str)  Logger().GET(__FILE__,__LINE__,__func__,DEBUGWARNING)<<str;*/
using namespace std;
void f()
{
	LinkList<int> ll;
	int i=1;
	ll.insert(i);
	ll.insert(i);
	ll.insert(i);
	ll.Traverse();
}
void g()
{
	LinkList<String> ll;
//	ll.insert("gaurav"));

	ll.Traverse();
}
int main()
{

    String s="gaurav";
    String s1="sharma";
    String s3="-12.534";
    String s4=s1+s;
    double d=s3.toDouble();
    Logger::log(1,s3);
    f();
    g();
    return 0;
}
