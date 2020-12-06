/**********************************************************/
/*** Title: song.h                                      ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for Song class            ***/
/**********************************************************/
#ifndef SONGH
#define SONGH

#include <iostream>
#include <string>

using namespace std;


class Song {
protected:
    string songName;
    string artistName;
    int rank;
    int year;
    int decade;
    string genre;
    char groupType;
    Song* nextNodePtr;
    

public:

    Song(){
        songName = "";
        artistName = "";
        rank = 0;
        year = 0;
        decade = 0;
        groupType = NULL;
        genre = "";
    }

    Song(string tempSongName, string tempArtistName, int tempRank, int tempYear, char tempGroupType, string tempGenre);

    void InsertAfter(Song* nodeLoc);

    Song* GetNext();

    void SetSongName(string tempSongName);
    string GetSongName();

    void SetArtistName(string tempArtistName);
    string GetArtistName();

    void SetRank(int tempRank);
    int GetRank();

    void SetYear(int tempYear);
    int GetYear();

    void SetGroupType(char temmpGroupType);
    char GetGroupType();

    void SetGenre(string tempGenre);
    string GetGenre();

    int GetDecade();

    void PrintPlaylist();

};

#endif 