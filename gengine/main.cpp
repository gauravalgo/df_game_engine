#include <iostream>
#include "Logger.h"
#include "Stack.h"
using namespace std;
int main()
{

    String s="gaurav";
    String s1="sharma";
    String s3=s1+s;
    {
        Logger::log(1,s3);
    }
    String s4="123.678";
    String s5(10);
    String s6(10);
    char c='.';
    split(s4,s5,s6,c);
   Logger::log(1,s4);
    Logger::log(1,s5);
     Logger::log(1,s6);
     Stack<int> IntStack(1000);
     int number=s6.toInt();
        number=number<<2;
        if(IntStack!=number)
        {

        }
   /* Stack<String> stackString(100);
    Stack<int> stackInteger(10);
     Stack<double> stackDouble(10);*/
    try
    {
/*
        stackString.push(String("great"));
        stackString.push(String("wall"));
        stackString.push(String("in"));
        stackInteger.push(89);
        stackInteger.push(9);
        stackInteger.push(890);
       stackInteger.push(800);
        stackInteger.push(700);
        stackInteger.push(899);
        stackDouble.push(23.02);
        stackDouble.push(238.30);
        stackDouble.push(237.50);
        stackDouble.push(235.70);
       stackString.display();
        stackInteger.display();
        stackDouble.display();*/
    }
    catch(const std::exception  &ex)
    {
        std::cerr<<"Exception"<<ex.what()<<std::endl;
    }
    return 0;
}
