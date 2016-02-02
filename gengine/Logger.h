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

