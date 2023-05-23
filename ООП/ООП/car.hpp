//файл объявлений

#ifndef CAR_HPP
#define CAR_HPP

#include<iostream>
#include <stdexcept>

class Car
{
public:

	Car(unsigned int capacity, double rate);// constructor

	double maxDistance(); //method

	friend std::ostream& operator << (std::ostream& out, const Car& c); //output

private:
	const unsigned int capacity_; //filed: oil valume in liter
	double rate_; //filed: liter /100km
};
#endif