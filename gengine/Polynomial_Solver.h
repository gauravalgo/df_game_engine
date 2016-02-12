
namespace univariate
{
  class quadratic_polynomial
  {
    private:
    int leading_coefficient;
    int b;
    int c;  
    double Discriminant;
    public:
    void find_roots()
    Discriminant =  b*b - 4*leading_coefficient*c;	// must be>0!
	if( Di<0 ) { r1=r2=1e99; return 0; }
	Di =  sqrt(Di);
	r1 =  (-b1 + Di)/2/a1;
	r2 =  (-b1 - Di)/2/a1;
	return 2;
  };
};
