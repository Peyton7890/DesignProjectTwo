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
    string tempName;
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
    bool p1avail = true;
    bool p2avail = true;
    bool p3avail = true;
    bool p4avail = true;
    bool p5avail = true;

    master = makeMaster(); //Creates the master playlist

    //Prompts user to enter what type of function they want to use
    cout << "Enter 'q' to quit, 'c' to create playlist, 'm' to modify";
    cout << ", 'd' to delete, and 'p' to print" << endl;
    cin >> userInput;

    //Checks for user input and calls the corresponding function
    while (userInput != 'q') {
        if (userInput == 'c') {
            //Checks to see if there is an available playlist, and if there is
            //it asks the user to name the playlist and then it creates it
            if (p1avail == true) {
                cout << "Enter a name for your playlist" << endl;
                cin >> p1name;
                p1 = createPlaylist(master);
                p1avail = false;
            }
            else if (p2avail == true) {
                cout << "Enter a name for your playlist" << endl;
                cin >> p2name;
                p2 = createPlaylist(master);
                p2avail = false;
            }
            else if (p3avail == true) {
                cout << "Enter a name for your playlist" << endl;
                cin >> p3name;
                p3 = createPlaylist(master);
                p3avail = false;
            }
            else if (p4avail == true) {
                cout << "Enter a name for your playlist" << endl;
                cin >> p4name;
                p4 = createPlaylist(master);
                p4avail = false;
            }
            else if (p5avail == true) {
                cout << "Enter a name for your playlist" << endl;
                cin >> p5name;
                p5 = createPlaylist(master);
                p5avail = false;
            }
            else {
                cout << "You already have 5 playlists, "
                    << "delete one to make a new one" << endl << endl;
            }
        }
        else if (userInput == 'm') {
            //Asks for name of playlist to be mofified, and then modiefies it
            cout << "Enter the name of the playlist to be modified" << endl;
            cin >> tempName;
            if (tempName == p1name) {
                modifyPlaylist(p1, master);
            }
            else if (tempName == p2name) {
                modifyPlaylist(p2, master);
            }
            else if (tempName == p3name) {
                modifyPlaylist(p3, master);
            }
            else if (tempName == p4name) {
                modifyPlaylist(p4, master);
            }
            else if (tempName == p5name) {
                modifyPlaylist(p5, master);
            }
            else {
                cout << "There is no playlist named " << tempName << endl;
            }
        }
        else if (userInput == 'd') {
            //Asks for name of playlist to be deleted, and then deletes it
            cout << "Enter the name of the playlist to be deleted" << endl;
            cin >> tempName;
            if (tempName == p1name) {
                delete p1;
            }
            else if (tempName == p2name) {
                delete p2;
            }
            else if (tempName == p3name) {
                delete p3;
            }
            else if (tempName == p4name) {
                delete p4;
            }
            else if (tempName == p5name) {
                delete p5;
            }
            else {
                cout << "There is no playlist named " << tempName << endl;
            }
        }
        else if (userInput == 'p') {
            //Asks for name of playlist to be printed, and then prints it
            cout << "Enter the name of the playlist to be printed" << endl;
            cin >> tempName;
            if (tempName == p1name) {
                printlist(p1);
            }
            else if (tempName == p2name) {
                printlist(p2);
            }
            else if (tempName == p3name) {
                printlist(p3);
            }
            else if (tempName == p4name) {
                printlist(p4);
            }
            else if (tempName == p5name) {
                printlist(p5);
            }
            else {
                cout << "There is no playlist named " << tempName << endl;
            }
        }
        else {
            cout << "Not a valid option, please try again." << endl;
        }
        cout << "Enter 'q' to quit, 'c' to create playlist, 'm' to modify";
        cout << ", 'd' to delete, and 'p' to print" << endl;
        cin >> userInput;
    }

     return 0;
}