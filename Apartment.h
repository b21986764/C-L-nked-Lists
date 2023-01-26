//
//  Apartment.h
//  Ass2
//
//  Created by Sertaç Güler on 21.11.2022.
//

#ifndef Apartment_h
#define Apartment_h
#include <cstring>
#include <string>
using namespace std;
class Apartment{
public:
    string ap_name;
    int max_band;
    Apartment* next;
    Apartment(string ap_name, int max_band);
    ~Apartment();
};

#endif /* Apartment_h */
