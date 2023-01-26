//
//  ApartmentList.h
//  Ass2
//
//  Created by Sertaç Güler on 20.11.2022.
//

#ifndef ApartmentList_h
#define ApartmentList_h
#include "Apartment.h"
#include <string>
#include <iostream>
using namespace std;

class ApartmentList{
public:
    Apartment* head;
    Apartment* last;
    ApartmentList();
    ~ApartmentList();
    void add_apartment(string new_ap_name, string place, int new_max_band);
    void printList(Apartment* n);
    
};
#endif /* ApartmentList_h */
