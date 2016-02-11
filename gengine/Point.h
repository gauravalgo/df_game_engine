namespace D2
{
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
    /*Sets the X coordinate of this Point2D in double precision.*/
    void setX(double x=0.0)
    {
        this->x=x;
    }
     /*Sets the Y coordinate of this Point2D in double precision.*/
    void	setY(double y=0.0)
    {
        this->y=y;
    }
   /*Sets the X coordinate of this Point2D in double precision.*/
    double	getX()
    {
        return x;
    }
    /*Sets the Y coordinate of this Point2D in double precision.*/
    double	getY()
    {
        return y;
    }
};
};
