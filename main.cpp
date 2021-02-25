/*
** GOOGLE PROJECT, 2021
** GoogleHashcode2021
** File description:
** main
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "class.hpp"

Car parseCar(string str)
{
    Car *car = new Car();
    string tmp2;
    stringstream tmp(str);

    getline(tmp, tmp2, ' ');
    car->_nbStreet = atoi(tmp2.c_str());
    for (int i = 0; getline(tmp, tmp2, ' '); i++)
        car->_nameStreet.push_back(tmp2);
    return *car;
}

Intersec parseIntersec(string str, Intersec *intersec)
{
    string tmp2;
    stringstream tmp(str);

    getline(tmp, tmp2, ' ');
    getline(tmp, tmp2, ' ');
    getline(tmp, tmp2, ' ');
    intersec->_nameStreet.push_back(tmp2);
    return *intersec;
}

Street parseStreet(string str)
{
    Street *street = new Street();
    string tmp2;
    stringstream tmp(str);

    getline(tmp, tmp2, ' ');
    street->_firstInter = atoi(tmp2.c_str());
    getline(tmp, tmp2, ' ');
    street->_secInter = atoi(tmp2.c_str());
    getline(tmp, tmp2, ' ');
    street->_name = tmp2;
    getline(tmp, tmp2, ' ');
    street->_nbSec = atoi(tmp2.c_str());
    return *street;
}

void parseCity(string str, City *city)
{
    string tmp2;
    stringstream tmp(str);

    getline(tmp, tmp2, ' ');
    city->_nbSec = atoi(tmp2.c_str());
    getline(tmp, tmp2, ' ');
    city->_nbIntersec = atoi(tmp2.c_str());
    getline(tmp, tmp2, ' ');
    city->_nbStreet = atoi(tmp2.c_str());
    getline(tmp, tmp2, ' ');
    city->_nbCars = atoi(tmp2.c_str());
    getline(tmp, tmp2, ' ');
    city->_nbPoint = atoi(tmp2.c_str());
}

int main(int argc, char**av)
{
    City *city = new City();
    string str = av[1];
    fstream file(str);

    getline(file, str, '\n');
    parseCity(str, city);
    getline(file, str, '\n');
    for (int i = city->_nbIntersec; i > 0; i--) {
        Intersec *tmp = new Intersec();
        tmp->_nbInter = i;
        city->_intersec.push_back(parseIntersec(str, tmp));
    }
    for (int i = city->_nbStreet; i > 0; i--, getline(file, str, '\n')) {
        city->_streets.push_back(parseStreet(str));
    for (int i = city->_nbCars; i > 0; i--, getline(file, str, '\n'))
        city->_cars.push_back(parseCar(str));
    return 0;
}