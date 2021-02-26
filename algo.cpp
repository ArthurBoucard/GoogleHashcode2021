/*
** GOOGLE PROJECT, 2021
** GoogleHashcode2021
** File description:
** algo
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "class.hpp"

void lengthcar(City *city)
{
    for(int n = 0; n < city->_nbCars; n++)
        for(int i = cars[n]._nbStreet - 1; i > 0; i--)
            cars[n]._lengthStreet += cars[i].route.length;
}

void set_redlight(route *routes){
    for(int i = 0; i  < nbcars; i++) {
        if (cars[i].len_routes < tps_simulation + 1)
            for (int n = 0, t = 0; n < nb routes; n++) {
                if (routes[n].temps == NULL)
                    route[n].temps = (t % 2) + 1;
                t += route[n].length
            }
    }
}

int count_notempty(intersection inter)
{
    int nb;
    for(int i = 0; i < inter.nbstreet; i++)
        if (inter.rue[i].temps != NULL)
            nb++;
    return nb;
}

void print_results(intersection *intersections){
    int nb = 0;

    for(int i = 0; i < nb_intersections; i++){
        for (int n = 0; n < intersections[i].nb; n++)
            if (intersection[i].rue[n].time != NULL)
                nb++;
    }
    std:cout << nb;
    std:cout << intersection.nb << count_notempty(intersections);
    for(int i = 0; i < nb_intersections; i++)
        std:cout << intersections.rue.name << intersections.rue.temps;
}route[n].temps = (t % 2) + 1;
                t += route[n].length
            }
    }
}

int count_notempty(intersection inter)
{
    int nb;
    for(int i = 0; i < inter.nbstreet; i++)
        if (inter.rue[i].temps != NULL)
            nb++;
    return nb;
}

void print_results(intersection *intersections)
{
    int nb = 0;

    for(int i = 0; i < nb_intersections; i++){
        for (int n = 0; n < intersections[i].nb; n++)
            if (intersection[i].rue[n].time != NULL)
                nb++;
    }
    std:cout << nb;
    std:cout << intersection.nb << count_notempty(intersections);
    for(int i = 0; i < nb_intersections; i++)
        std:cout << intersections.rue.name << intersections.rue.temps;
}route[n].temps = (t % 2) + 1;
                t += route[n].length
            }
    }
}

int count_notempty(intersection inter)
{
    int nb;
    for(int i = 0; i < inter.nbstreet; i++)
        if (inter.rue[i].temps != NULL)
            nb++;
    return nb;
}

void print_results(intersection *intersections)
{
    int nb = 0;

    for(int i = 0; i < nb_intersections; i++){
        for (int n = 0; n < intersections[i].nb; n++)
            if (intersection[i].rue[n].time != NULL)
                nb++;
    }
    std:cout << nb;
    std:cout << intersection.nb << count_notempty(intersections);
    for(int i = 0; i < nb_intersections; i++)
        std:cout << intersections.rue.name << intersections.rue.temps;
}
