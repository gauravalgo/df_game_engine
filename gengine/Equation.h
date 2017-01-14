#include "String.h"
class Equation
{
    private:
    String *Real_Numbers;
    String *Variables;
    String *Expression_String;
    int degree;
    public:
    Equation();
    ~Equation();
    void Parser();
    Equation(int d,char *expr);
    void extract_real_numbers();
    void detect_variables();
    void extract_coefficiants();
};
