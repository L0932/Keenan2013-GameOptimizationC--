#ifndef PA3_C_H
#define PA3_C_H

#define FLAG_ME 0

class Vect2D
{
public:

	// default constructor
	Vect2D()
		: x(0.0f), y(0.0f)
	{
	};


	// destructor
	~Vect2D()
	{
	};

	// set functions
	void setX( const float inX )
	{
		this->x = inX;
	};

	void setY( const float inY )
	{
		this->y = inY;
	};

	void set( const float inX, const float inY )
	{
		this->x = inX;
		this->y = inY;
	};

	float getX()
	{
		return this->x;
	};

    float getY()
	{
		return this->y;
	};

	//*********************************************************************
	// Convert these methods to proxys
	//*********************************************************************

	Vect2D operator + ( const Vect2D &tmp ) const;



private:
	float x;
	float y;


};



#endif