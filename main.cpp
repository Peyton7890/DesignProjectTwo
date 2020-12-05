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

    Master tmp;
    
    tmp.makeMaster();
    tmp.PrintPlaylist();



    //Prompts user to enter what type of function they want to use
    cout << "Enter 'q' to quit, 'c' to create playlist, 'm' to modify";
    cout << ", 'd' to delete, 'p' to print, and z to merge" << endl;
    cin >> userInput;

    //Checks for user input and calls the corresponding function
    while (userInput != 'q') {
        if (userInput == 'c') {
            cout << "create" << endl;
        }
        else if (userInput == 'm') {
            cout << "modify" << endl;
        }
        else if (userInput == 'd') {
            cout << "delete" << endl;
        }
        else if (userInput == 'p') {
            cout << "print" << endl;
        }
        else if (userInput == 'z') {
            cout << "merge" << endl;
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