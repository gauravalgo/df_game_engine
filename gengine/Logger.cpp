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
