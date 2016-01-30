class String
{
    //this is for test
    private:
        int strlength;
        char *buffer;
    public:
    String():strlength(0),buffer(NULL);//Default constructor
    String(char ch);                //pamaterised character constructor
    String(const char *cstring=""); //paramaterised const character string constructor
    String(const char &str);        //copy constructor
    ~String();                      //destructor
};

