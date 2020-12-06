/**********************************************************/
/*** Title: song.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for Master class          ***/
/**********************************************************/
#ifndef MASTER_H
#define MASTER_H

#include <iostream>
#include <fstream>
#include <string>
#include "song.h"

using namespace std;


class Master : public Song{
public:
    void makeMaster(Song* head, Song* curr, Song* last);
    ifstream file;
    
};



#endif 