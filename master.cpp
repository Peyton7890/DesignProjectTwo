/**********************************************************/
/*** Title: song.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: Master class                          ***/
/**********************************************************/
#include "master.h"
#include "song.h"
#include <iostream>
#include <string>

using namespace std;

void Master::makeMaster() {
    
    file.open("billboard_200.txt");

    if (!file.is_open()) {
        cout << "Could not open file billboard_200.txt" << endl;
        return; //indicates error
    }


    head = new Song();
    last = head;

    for (int i = 0; i < 200; i++) {
        string str;
        string tempSongName;
        string tempArtistName;
        int tempRank;
        int tempYear;
        char tempGroupType;
        string tempGenre;

        getline(file, tempSongName); 
        getline(file, tempArtistName); 
        getline(file, str); tempRank = stoi(str);
        getline(file, str); tempYear = stoi(str); 
        getline(file, str); tempGroupType = str[0]; 
        getline(file, tempGenre);
        curr = new Song(tempSongName, tempArtistName, tempRank, tempYear, tempGroupType, tempGenre);
        last->InsertAfter(curr); 
        last = curr;
    }
}

