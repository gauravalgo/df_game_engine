Equation::Equation(int d,char *expr)
{
    degree=d;
    Expression_String=new String(expr);
    Real_Numbers=new Real_Numbers[degree];
    Variables= new Variables[degree];
}
Equation::~Equation()
{
    delete Expression_String;
    delete[] Real_Numbers;
    delete[] Variables;
}
void Equation::extract_real_numbers()
{

}
void Equation::detect_variables()
{

}
void Equation::extract_coefficiants()
{

}
void Equation::Parser()
{
    while(Expression_String[i]!='\0')
        {
                if((Expression_String[i]<='a')&&(Expression_String[i]>='z'))
                {

                }

        }
}
