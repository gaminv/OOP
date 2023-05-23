// OOP Suharev_Sergey.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include<iostream>
#include <stdexcept>

#include "car.hpp"

int main()
{
	Car car(40, 6.5);


	double max = car.maxDistance();


	std::cout << "maxDistance: " << max << '\n';

	return 0;
}