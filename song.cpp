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
        this->decade = ((year % 100) / 10) * 10;
        this->groupType = tempGroupType;
        this->genre = tempGenre;
        this->nextNodePtr = NULL;
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

void Song::SetSongName(string tempSongName){songName = tempSongName;}
string Song::GetSongName(){return songName;}

void Song::SetArtistName(string tempArtistName){artistName = tempArtistName;}
string Song::GetArtistName(){return artistName;}

void Song::SetRank(int tempRank){rank = tempRank;}
int Song::GetRank(){return rank;}

void Song::SetYear(int tempYear){year = tempYear;}
int Song::GetYear(){return year;}

void Song::SetGroupType(char tempGroupType){groupType = tempGroupType;}
char Song::GetGroupType(){return groupType;}

void Song::SetGenre(string tempGenre){genre = tempGenre;}
string Song::GetGenre(){return genre;}

int Song::GetDecade(){return decade;}

void Song::PrintPlaylist() {
    cout << "Title: " << songName << endl;
    cout << "Artist: " << artistName << endl; 
    cout << "Rank: " << rank << endl;
    cout << "Year: " << year << endl;
    cout << "Decade: " << decade << endl;
    cout << "Genre: " << genre << endl;
    cout << "Group Type: " << groupType << endl << endl;
}