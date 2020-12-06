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

Song* makeMaster() {
    Song* head;
    Song* curr;
    Song* last;

    ifstream file;

    file.open("billboard_200.txt");

    if (!file.is_open()) {
        cout << "Could not open file billboard_200.txt" << endl;
        exit; //indicates error
    }


    head = new Song();
    last = head;

    for (int i = 0; i < 20; i++) {
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
    return (head);
}

void printlist(Song* head) {
    Song* curr;
    curr = head->GetNext(); 
    while (curr != nullptr){
        curr->PrintPlaylist();
        curr = curr->GetNext();
    }
}

Song* createByDecade(Song* headm) {
    Song* currm;
    Song* lastm;

    Song* headp;
    Song* currp;
    Song* lastp;
    int decade;
    
    cout << "enter decade" << endl;
    cin >> decade;

    headp = new Song();
    lastp = headp;
    currm = headm->GetNext();

    while (currm != nullptr) {
        if (currm->GetDecade() == decade) {
            currp = new Song(currm->GetSongName(),
                            currm->GetArtistName(), 
                            currm-> GetRank(), 
                            currm->GetYear(),
                            currm->GetGroupType(), 
                            currm->GetGenre());
            lastp->InsertAfter(currp); 
            lastp = currp;
        }
        currm = currm->GetNext();

    }
    return (headp);
}

Song* createByGroupType(Song* headm) {
    Song* currm;
    Song* lastm;

    Song* headp;
    Song* currp;
    Song* lastp;
    char temp;
    
    cout << "enter group type" << endl;
    cin >> temp;

    headp = new Song();
    lastp = headp;
    currm = headm->GetNext();

    while (currm != nullptr) {
        if (currm->GetGroupType() == temp) {
            currp = new Song(currm->GetSongName(),
                            currm->GetArtistName(), 
                            currm-> GetRank(), 
                            currm->GetYear(),
                            currm->GetGroupType(), 
                            currm->GetGenre());
            lastp->InsertAfter(currp); 
            lastp = currp;
        }
        currm = currm->GetNext();

    }
    return (headp);
}
Song* createByGenre(Song* headm){
    Song* currm;
    Song* lastm;

    Song* headp;
    Song* currp;
    Song* lastp;
    string temp;
    
    cout << "enter genre" << endl;
    cin >> temp;

    headp = new Song();
    lastp = headp;
    currm = headm->GetNext();

    while (currm != nullptr) {
        if (currm->GetGenre() == temp) {
            currp = new Song(currm->GetSongName(),
                            currm->GetArtistName(), 
                            currm-> GetRank(), 
                            currm->GetYear(),
                            currm->GetGroupType(), 
                            currm->GetGenre());
            lastp->InsertAfter(currp); 
            lastp = currp;
        }
        currm = currm->GetNext();

    }
    return (headp);
}

Song* createByRank(Song* headm){
    Song* currm;
    Song* lastm;

    Song* headp;
    Song* currp;
    Song* lastp;
    int temp;
    
    cout << "Enter your desired ranks, then enter '-1' to quit" << endl;
    cin >> temp;

    headp = new Song();
    lastp = headp;

    while (temp != -1){
        currm = headm->GetNext();
        while (currm != nullptr) {
            if (currm->GetRank() == temp) {
                currp = new Song(currm->GetSongName(),
                                currm->GetArtistName(), 
                                currm-> GetRank(), 
                                currm->GetYear(),
                                currm->GetGroupType(), 
                                currm->GetGenre());
                lastp->InsertAfter(currp); 
                lastp = currp;
            }
            currm = currm->GetNext();
        }
        cin >> temp;
    }
    return (headp);
}

Song* deletePlaylist(Song* headp){
    
    while (headp != nullptr) {
        Song* tmp = headp->GetNext();
        delete headp;
        headp = tmp;
    }
    return (headp);
}
