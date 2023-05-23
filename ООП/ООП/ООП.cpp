#include "car.hpp"



Car::Car(unsigned int capacity, double rate): // constructor
	capacity_(capacity),
	rate_(rate)
{
	if (capacity > 300)
	{
		throw std::invalid_argument("too big capacity");
	}
}

 double Car::maxDistance()// method
{
	return ((capacity_ / rate_) * 100);
}
 
 std::ostream& operator << (std::ostream& out, const Car& c)
 {
	 out << c.capacity_ << " " << c.rate_;
	 return out;
 }