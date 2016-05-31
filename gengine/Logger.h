#ifndef LOGGER_H
#define LOGGER_H
#include<sstream>
#include "String.h"
#define log(level,...)  Logger::LOG(__FILE__,__LINE__,__func__,level,__VA_ARGS__)
using namespace std;
enum LoggerLevel
{
  DEBUGINFO,
  DEBUGERROR,
  DEBUGWARNING,
  DEBUGMSG1,
  DEBUGMSG2,
  DEBUGMSG3
};
class Logger
{
private:
    LoggerLevel level;
    static std::ostringstream os;
    Logger &operator=(const Logger& t);
    Logger(const Logger& t);
public:
    std::ostringstream& GET(const char* file,int line,const char* func,LoggerLevel level);
    static std::ostringstream& LOG(const char* file,int line,const char* func,int level,String cstring);
    virtual ~Logger();
    Logger(){}
    friend class String;
};
//char* need to modify with the String function of the game engine
#endif
