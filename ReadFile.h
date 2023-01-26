//
//  ReadFile.h
//  Ass2
//
//  Created by Sertaç Güler on 20.11.2022.
//
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>
#include <sstream>


#ifndef ReadFile_h
#define ReadFile_h

using namespace std;

class ReadFile{
public:
    ReadFile();
    virtual ~ReadFile();
    static void split(stringstream& st, vector<string>& give);
    static void take(string inp);
    
};


#endif /* ReadFile_h */
