#include<sstream>
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
    std::ostringstream os;
    Logger &operator=(const Logger& t);
    Logger(const Logger& t);
public:
    std::ostringstream& GET(const char* file,int line,const char* func,LoggerLevel level);
    virtual ~Logger();
    Logger(){}
};
//char* need to modify with the String function of the game engine
std::ostringstream& Logger::GET(const char* file,int line,const char* func,LoggerLevel level=DEBUGINFO)
{
    os<<"   "<<level;
    os<<"  File: %d"<<file;
    os<<"  Line: %d"<<line;
    os<<"  Function: %s"<<func;
    return os;
}
Logger::~Logger()
{
    fprintf(stderr,"%s",os.str().c_str());
    fflush(stderr);
}

