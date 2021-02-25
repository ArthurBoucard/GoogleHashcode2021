/*
** GOOGLE PROJECT, 2021
** GoogleHashcode2021
** File description:
** class
*/

#ifndef CLASS_HPP_
#define CLASS_HPP_

#include <iostream>
#include <vector>
using namespace std;

class Intersec
{
    public:
        Intersec();
        ~Intersec();

        int _nbInter;
        vector<string> _nameStreet;
};

class Street
{
    public:
        Street();
        ~Street();

        string _name;
        int _nbSec;
        int _firstInter;
        int _secInter;
};

class Car
{
    public:
        Car();
        ~Car();

        int _nbStreet;
        vector<string> _nameStreet;
        size_t _lengthStreet;
};

class City
{
    public:
        City();
        ~City();

        int _nbSec;
        int _nbIntersec;
        int _nbStreet;
        int _nbCars;
        int _nbPoint;
        vector<Street> _streets;
        vector<Intersec> _intersec;
        vector<Car> _cars;
    protected:
    private:
};

#endif /* !CLASS_HPP_ */
