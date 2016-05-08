#include "Logger.h"
std::ostringstream Logger::os;
std::ostringstream& Logger::GET(const char* file,int line,const char* func,LoggerLevel level=DEBUGINFO)
{
    os<<"   "<<level;
    os<<"  File: "<<file;
    os<<"  Line: "<<line;
    os<<"  Function: "<<func;
    return os;
}
Logger::~Logger()
{
    fprintf(stderr,"%s",os.str().c_str());
    fflush(stderr);
}
std::ostringstream& Logger::LOG(const char* file,int line,const char* func,LoggerLevel level,String cstring)
{
    os<<"   "<<level;
    os<<"  File: "<<file;
    os<<"  Line: "<<line;
    os<<"  Function: "<<func;
    os<<cstring.buffer<<endl;
    return os;
}
