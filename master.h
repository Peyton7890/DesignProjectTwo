/**********************************************************/
/*** Title: song.cpp                                    ***/
/*** Course: Computational Problem Solving CPET-II      ***/
/*** Developers:  Peyton Martin                         ***/
/*** Date : 09/21/2020                                  ***/
/*** Description: header file for Master class          ***/
/**********************************************************/
#ifndef MASTER_H
#define MASTER_H

#include <iostream>
#include <fstream>
#include <string>
#include "song.h"

using namespace std;

Song* makeMaster();
void printlist(Song* head);
Song* createByDecade(Song* headm);
Song* createByGroupType(Song* headm);
Song* createByGenre(Song* headm);
Song* createByRank(Song* headm);
Song* deletePlaylist(Song* headp);




#endif 