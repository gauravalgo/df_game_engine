class Point
{
    private:
    double x;
    double y;
    public:
    Point(double x=0.0,double y=0.0)
    {
        this->x=x;
        this->y=y;
    }
    Point(const Point& P)
    {
        this->x=P.x;
        this->y=P.y;
    }
    Point& operator=(const Point& P)
    {
        this->x=P.x;
        this->y=P.y;
    }
    /*Returns the X coordinate of this Point2D in double precision.*/
    void setX(double x=0.0)
    {
        this->x=x;
    }
    void setY(double y=0.0)
    {
        this->y=y;
    }
    double	getX()
    {
        return x;
    }
    double	getY()
    {
        return y;
    }
};
