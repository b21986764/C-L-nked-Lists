//
//  main.cpp
//  Ass2
//
//  Created by Sertaç Güler on 17.11.2022.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include "ReadFile.h"
using namespace std;


void print(vector<string> v){
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i]  << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    ReadFile read;
    read.take(argv[1]);
    ApartmentList apt;
    
    

    
    return 0;
}
