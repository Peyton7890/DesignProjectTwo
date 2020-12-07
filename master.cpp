/**********************************************************/
/*** Title: song.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: Collection of functions               ***/
/**********************************************************/
#include "master.h"
#include "song.h"
#include <iostream>
#include <string>

using namespace std;

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: makeMaster()
Input: (0) 
Output: (1) master head node
Purpose: Creates the master playlist
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
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
        curr = new Song(tempSongName, tempArtistName, tempRank, tempYear, 
                        tempGroupType, tempGenre);
        last->InsertAfter(curr); 
        last = curr;
    }
    return (head);
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: printlist()
Input: (1) Song node
Output: (0)
Purpose: Calls the PrintPlaylist function for
         ever node in the playlist
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void printlist(Song* head) {
    Song* curr;
    curr = head->GetNext(); 
    while (curr != nullptr){
        curr->PrintPlaylist();
        curr = curr->GetNext();
    }
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: createByDecade()
Input: (1) Song node
Output: (1) Updated Song node
Purpose: Creates a playlist based on the selected decade
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Song* createByDecade(Song* headm) {
    Song* currm;
    Song* lastm;

    Song* headp;
    Song* currp;
    Song* lastp;
    int decade;
    
    cout << "Enter desired decade" << endl;
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

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: createByGroupType()
Input: (1) Song node
Output: (1) Updated Song node
Purpose: Creates a playlist based on the selected group type
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Song* createByGroupType(Song* headm) {
    Song* currm;
    Song* lastm;

    Song* headp;
    Song* currp;
    Song* lastp;
    char temp;
    
    cout << "Enter desired group type" << endl;
    cout << "Options: 'F' for Female, 'M' for Male, and 'D' for Duo/Group" 
         << endl;
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

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: createByGenre()
Input: (1) Song node
Output: (1) Updated Song node
Purpose: Creates a playlist based on the selected genre
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Song* createByGenre(Song* headm){
    Song* currm;
    Song* lastm;

    Song* headp;
    Song* currp;
    Song* lastp;
    string temp;
    
    cout << "Enter desired genre" << endl;
    cout << "Options: 'Latin-Jazz', 'Country', 'Hip-Hop', 'Dance', 'R&B', "
         << "'Pop', and 'Rock'" << endl;
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

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: createByRank()
Input: (1) Song node
Output: (1) Updated Song node
Purpose: Creates a playlist based on the selected rank
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
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

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: createPlaylist()
Input: (1) Song node
Output: (1) Updated Song node
Purpose: Allows the user to select how they want to 
         create a a playlist, and then creates it
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Song* createPlaylist(Song* master) {
    Song* headp;
    int temp;

    cout << "Enter the corresponding number for the action you want" << endl;
    cout << "[1] Create by decade" << endl;
    cout << "[2] Create by group type" << endl;
    cout << "[3] Create by genre" << endl;
    cout << "[4] Create by rank" << endl;
    cout << "[5] Create by decade and group type" << endl;
    cout << "[6] Create by decade and genre" << endl;
    cout << "[7] Create by genre and group type" << endl;

    cin >> temp;

    if (temp == 1) {
        headp = createByDecade(master);
    }
    else if (temp == 2) {
        headp = createByGroupType(master);
    }
    else if (temp == 3) {
        headp = createByGenre(master);
    }
    else if (temp == 4) {
        headp = createByRank(master);
    }
    else if (temp == 5) {
        headp = createByDecade(master);
        headp = createByGroupType(headp);
    }
    else if (temp == 6) {
        headp = createByDecade(master);
        headp = createByGenre(headp);
    }
    else if (temp == 7) {
        headp = createByGroupType(master);
        headp = createByGenre(headp);
    }
    else {
        cout << "Invalid input" << endl;
    }

    return (headp);
}

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
Name: modifyPlaylist()
Input: (1) Song node
Output: (1) Updated Song node
Purpose: Allows the user to select if they want to
         insert or delete, and then does that.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Song* modifyPlaylist(Song* headp, Song* master){
    Song* currp = headp;
    Song* currm;
    char userInput;
    int rank;
    int position;
    unsigned int i;

    cout << "Enter 'I' to insert a song, 'D' to delete one, and 'Q' to quit"
         << endl;
    cin >> userInput;
    while (userInput != 'Q') {
        if (userInput == 'I') {
            cout << "Enter the rank of the song to insert" << endl;
            cin >> rank;
            cout << "Enter the postion for the song to be placed" << endl;
            cin >> position;

            currm = master->GetNext();
            while (currm != nullptr) {
                if (currm->GetRank() == rank) {
                    for (i = 0; i < position; i++) {
                        currp = currp->GetNext();
                    }
                    currp = new Song(currm->GetSongName(),
                                    currm->GetArtistName(), 
                                    currm-> GetRank(), 
                                    currm->GetYear(),
                                    currm->GetGroupType(), 
                                    currm->GetGenre());
            }
            currm = currm->GetNext();
            }
        }
        else if (userInput == 'D') {
            cout << "Enter the postion of the song to be deleted" << endl;
            cin >> position;
            for (i = 0; i < position; i++) {
                currp = currp->GetNext();
            }
            delete currp;
        }
        else {cout << "Invalid input" << endl;}
        cout << "Enter 'I' to insert a song, 'D' to delete one, and 'Q'" 
             << "to quit" << endl;
        cin >> userInput;
    }
    return (headp);
}