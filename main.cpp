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

    master = makeMaster();

    //printlist(master);

    //p1 = createByDecade(master);
    //printlist(p1);

    //p2 = createByGroupType(master);
    //printlist(p2);

    p3 = createByDecade(master);
    p3 = createByGroupType(p3);
    printlist(p3);

    


//     //Prompts user to enter what type of function they want to use
//     cout << "Enter 'q' to quit, 'c' to create playlist, 'm' to modify";
//     cout << ", 'd' to delete, and 'p' to print" << endl;
//     cin >> userInput;

//     //Checks for user input and calls the corresponding function
//     while (userInput != 'q') {
//         if (userInput == 'c') {
//             if (numPlaylists < 5) {
//                 cout << "create" << endl;
//                 numPlaylists++;
//             }
//             else {
//                 cout << "You already have 5 playlists, delete one to make a new one" << endl;
//             }
//         }
//         else if (userInput == 'm') {
//             cout << "modify" << endl;
//         }
//         else if (userInput == 'd') {
//             cout << "delete" << endl;
//         }
//         else if (userInput == 'p') {
        
//         }
//         else {
//             cout << "Not a valid option, please try again." << endl;
//         }
//         cout << "Enter 'q' to quit, 'c' to create playlist, 'm' to modify";
//         cout << ", 'd' to delete, 'p' to print, and z to merge" << endl;
//         cin >> userInput;
//     }

     return 0;
}