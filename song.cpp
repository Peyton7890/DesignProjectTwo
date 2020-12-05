/**********************************************************/
/*** Title: song.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: Song class                            ***/
/**********************************************************/
#include "song.h"

Song::Song(string tempSongName, string tempArtistName, int tempRank, int tempYear, char tempGroupType, string tempGenre) {
        this->songName = tempSongName;
        this->artistName = tempArtistName;
        this->rank = tempRank;
        this->year = tempYear;
        this->decade = year;
        this->groupType = tempGroupType;
        this->genre = tempGenre;
        this->nextNodePtr = NULL;
    }

Song::Song(string tempSongName, string tempArtistName, int tempRank, int tempYear, char tempGroupType, string tempGenre, Song* nextLoc) {
        this->songName = tempSongName;
        this->artistName = tempArtistName;
        this->rank = tempRank;
        this->year = tempYear;
        this->decade = year;
        this->groupType = tempGroupType;
        this->genre = tempGenre;
        this->nextNodePtr = nextLoc;
    }

void Song::InsertAfter(Song* nodeLoc) {
    Song* tmpNext;
	tmpNext = this->nextNodePtr;
	this->nextNodePtr = nodeLoc;
	nodeLoc->nextNodePtr = tmpNext;
}

Song* Song::GetNext() {
	return this->nextNodePtr;
}

void Song::PrintPlaylist() {

    cout << "Title: " << songName << endl;
    cout << "Artist: " << artistName << endl; 
    cout << "Rank: " << rank << endl;
    cout << "Year: " << year << endl;
    cout << "Decade: " << decade << endl;
    cout << "Genre: " << genre << endl;
    cout << "Group Type: " << groupType << endl << endl;
}