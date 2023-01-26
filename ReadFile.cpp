//
//  ReadFile.cpp
//  Ass2
//
//  Created by Sertaç Güler on 20.11.2022.
//

#include "ReadFile.h"
#include "ApartmentList.h"
#include "Apartment.h"

ReadFile::ReadFile(){
    
}
ReadFile::~ReadFile(){
    
}
//ApartmentsList apt;
void ReadFile::split(stringstream& st, vector<string>& give){
    string loc;
    while(getline(st, loc, '\t')){
        give.push_back(loc);
    }
}
void ReadFile::take(string inp){
    ApartmentList acc;
    ifstream file(inp);
    if(!file){
        cerr << "File not found" << endl;
        exit(1);
    }
    while(file){
        string str;
        getline(file,str);
        stringstream st(str);
        vector<string> v;
        split(st,v);
        string com = v[0];
        cout << com << endl;
        
        if(com.compare("add_apartment")==0){
            string ap_name = v[1];
            string place = v[2];
            int max_band = stoi(v[3]);
            acc.add_apartment(ap_name, place, max_band);
        }
        }else if(com.compare("add_flat")==0){
            string ap_name = v[1];
            int ind = stoi(v[2]);
            int ini_band = stoi(v[3]);
            int flat_id = stoi(v[4]);
            acc.add_flat(ap_name, ind, ini_band, flat_id);
        }else if(com.compare("remove_apartment")== 0){
            string ap_name = v[1];
            acc.remove_apartment(ap_name);
        }else if(com.compare("make_flat_empty")==0){
            string ap_name = v[1];
            int flat_id = stoi(v[2]);
            acc.make_empty(ap_name, flat_id);
        }else if(com.compare("find_sum_of_max_bandwidths")==0){
            acc.find_max();
        }else if(com.compare("merge_two_apartments")==0){
            string ap1 = v[1];
            string ap2 = v[2];
            acc.merge_apt(ap1, ap2);
        }else if(com.compare("relocate_flats_to_same_apartment")==0){
            string new_apt = v[1];
            int flat_id_shift = stoi(v[2]);
            string flats = v[3];
            acc.relocate(new_apt, flat_id_shift, flats);
        }else if(com.compare("list_apartments")==0){
            acc.list_apartments();
        }

        
    }
}
