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

    Song* head;
    Song* curr;
    Song* last;

    head = new Song();
    last = head;

    for (int i = 0; i < 50; i++) {
        string tempSongName;
        string tempArtistName;
        int tempRank;
        int tempYear;
        char tempGroupType;
        string tempGenre;

        getline(file, tempSongName); cout << tempSongName << endl;
        getline(file, tempArtistName); cout << tempArtistName << endl;
        file >> tempRank; file.ignore(); cout << tempRank << endl;
        file >> tempYear; file.ignore(); 
        cout << tempYear << endl;
        file >> tempGroupType; file.ignore();
        cout << tempGroupType << endl;
        getline(file, tempGenre);
        cout << tempGenre<< endl;
        //curr = new Song(tempSongName, tempArtistName, tempRank, tempYear, tempGroupType, tempGenre);
        //last->InsertAfter(curr); 
        //last = curr;
    }
}

void Master::PrintPlaylist() {
    cout << "Title: " << songName << endl;
    cout << "Artist: " << artistName << endl; 
    cout << "Rank: " << rank << endl;
    cout << "Year: " << year << endl;
    cout << "Decade: " << decade << endl;
    cout << "Genre: " << genre << endl;
    cout << "Group Type: " << groupType << endl << endl;
}
