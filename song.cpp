/**********************************************************/
/*** Title: song.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: Song class                            ***/
/**********************************************************/
#include "song.h"

//Creates an object of Song
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

//Destructor for song object
Song::~Song(){}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: InsertAfter()
Input: (1) Song node
Output: (0)
Purpose: Inserts a song after the current one
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Song::InsertAfter(Song* nodeLoc) {
    Song* tmpNext;
	tmpNext = this->nextNodePtr; 
	this->nextNodePtr = nodeLoc;
	nodeLoc->nextNodePtr = tmpNext;
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: GetNext()
Input: (0) 
Output: (1)
Purpose: Retrieves the next node in the list
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Song* Song::GetNext() {
	return this->nextNodePtr;
}

//A group of functions, all with the purpose of setting, and
//outputing the different variables of the object Song
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

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: PrintPlaylist()
Input: (0)
Output: (0)
Purpose: Prints the different characteristics
         of a Song node
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Song::PrintPlaylist() {
    cout << "Title: " << songName << endl;
    cout << "Artist: " << artistName << endl; 
    cout << "Rank: " << rank << endl;
    cout << "Year: " << year << endl;
    cout << "Decade: " << decade << endl;
    cout << "Genre: " << genre << endl;
    cout << "Group Type: " << groupType << endl;
    cout << "----------------------------------------------"<< endl;
}