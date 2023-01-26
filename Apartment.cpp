//
//  Apartment.cpp
//  Ass2
//
//  Created by Sertaç Güler on 21.11.2022.
//

#include <stdio.h>
#include "Apartment.h"
Apartment::Apartment(string name, int band) {
    ap_name = name;
    max_band = band;
}

Apartment::~Apartment(){
    
    next = NULL;
}
