/**********************************************************/
/*** Title: main.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date :                                             ***/
/*** Description: main file for the design project      ***/
/**********************************************************/

#include "song.h"
#include "master.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    char userInput;
    int numPlaylists = 0;
    Song* master;
    Song* p1;
    Song* p2;
    Song* p3;
    Song* p4;
    Song* p5;
    string p1name;
    string p2name;
    string p3name;
    string p4name;
    string p5name;



    master = makeMaster();

    //printlist(master);

    p1 = createByDecade(master);
    //printlist(p1);

    //p2 = createByGroupType(master);
    //printlist(p2);


    


    //Prompts user to enter what type of function they want to use
    cout << "Enter 'q' to quit, 'c' to create playlist, 'm' to modify";
    cout << ", 'd' to delete, and 'p' to print" << endl;
    cin >> userInput;

    //Checks for user input and calls the corresponding function
    while (userInput != 'q') {
        if (userInput == 'c') {
            if (numPlaylists < 5) {
                cout << "Enter a name for your playlist" << endl;
                if (numPlaylists == 0) { cin >> p1name;}
                else if (numPlaylists == 1) { cin >> p2name;}
                else if (numPlaylists == 2) { cin >> p3name;}
                else if (numPlaylists == 3) { cin >> p4name;}
                else if (numPlaylists == 4) { cin >> p5name;}
                numPlaylists++;
            }
            else {
                cout << "You already have 5 playlists, delete one to make a new one" << endl;
            }
        }
        else if (userInput == 'm') {
            cout << "modify" << endl;
        }
        else if (userInput == 'd') {
            
            deletePlaylist(p1);
            //numPlaylists--;
        }
        else if (userInput == 'p') {
            printlist(p1);
        }
        else {
            cout << "Not a valid option, please try again." << endl;
        }
        cout << "Enter 'q' to quit, 'c' to create playlist, 'm' to modify";
        cout << ", 'd' to delete, 'p' to print, and z to merge" << endl;
        cin >> userInput;
    }

     return 0;
}