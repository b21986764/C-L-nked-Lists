//
//  ApartmentList.cpp
//  Ass2
//
//  Created by Sertaç Güler on 20.11.2022.
//

#include "ApartmentList.h"
#include "Apartment.h"
#include <string.h>
#include <cstring>
#include <iostream>

using namespace std;
ApartmentList::ApartmentList(){
    head = NULL;
    last = NULL;
}

ApartmentList::~ApartmentList(){
    Apartment* cur = head;
    while(cur != last->next){
        Apartment* temp = cur -> next;
        delete cur;
        cur = temp;
    }
    head = NULL;
}


void ApartmentList::printList(Apartment* n)
{
        while (n != NULL) {
  
        
        cout << n->ap_name << " " << n->max_band << endl;
        n = n->next;
    }
}
void ApartmentList::add_apartment(string new_ap_name, string place, int new_max_band){
    
    Apartment* new_ap;
    if(place.compare("head")==0){
        
        new_ap = new Apartment(new_ap_name,new_max_band);
        head = new_ap;
        last = new_ap;
        last->next = head;
        
    }else{
        int n = int(place.length());
        char char_array[n + 1];
        strcpy(char_array, place.c_str());
        char* word1 = strtok(char_array, "_");
        char* word2 = strtok(NULL, "_");
        if(string(word1).compare("after")==0){//If instert after a specific node
            Apartment* temp;
            temp = head;
            do{
                if(temp->ap_name == word2){
                    new_ap = new Apartment(new_ap_name,new_max_band);
                    new_ap->next = temp->next;
                    temp->next = new_ap;
                    if(temp == last){
                        last = new_ap;
                    }
                }
            }while(temp!= last->next);
        }else if(string(word1).compare("before")==0){//Inster before a node
            if(head->ap_name == word2){  // If insert before head node
                new_ap = new Apartment(new_ap_name,new_max_band);
                new_ap->next = head;
                head = new_ap;
            }else{
                Apartment* nxt = head;
                Apartment* prv;
                while(nxt->ap_name != word2){
                    prv= nxt;
                    nxt = nxt->next;
                }
                new_ap = new Apartment(new_ap_name,new_max_band);
                new_ap->next = prv->next;
                prv->next = new_ap;
            }
        }
    }
    printList(head);
    
}

