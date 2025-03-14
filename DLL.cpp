
#include "DNode.hpp"
#include "DLL.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

//Check Playlist.cpp for instructions of what to write here and how to test it


	DLL::DLL(){  // constructor - initializes an empty list
		last = NULL;
		first = NULL;
		numSongs = 0;
	}
	DLL::DLL(string t, string l, int m, int s){  // constructor, initializes a list with one new node with data x
		DNode *n = new DNode (t,l,m,s);
		first = n;
		last = n;
		numSongs=1;
	}
	void DLL::push(string n, string a, int m, int s) {  // does what you'd think
		//this cerates a new node x
		DNode *x = new DNode(n,a,m,s);
		//if the first node and consequently the last node are nullptr then we set the first and last node of the linked list to be x;
		if(first == nullptr){
			first = x;
			last = x;
			//if now we have x aka the newNode to go to the next to the head 
			//then we set the new nodes previous node equal to null as It is now the first in the linked list
			//we then set first to poit to previous that equal the new node as the new node should be pushed to be the before the 'first' at that time
		}else{
			x ->next = first;
			x->prev = NULL;
			first->prev= x;
			first = x;
		}
		//increments numsongs
		numSongs++;
			}
	// Song *DLL::pop() { //does what you'd think
	// }

	void DLL::printList() {
		DNode *current = first;
		while(current != nullptr){
			current->song->printSong();
			current = current->prev;

		}
	}

	void DLL::moveUp(string s) {
	}

	void DLL::listDuration(int *tm, int *ts) {
			}
	void DLL::moveDown(string s) {
			}
	void DLL::makeRandom() {
		}
// 	int DLL::remove(string s) {  
// // note that the int returned is the index - this is standard for a remove, but we won't be using it.
// 		}


	DLL::~DLL(){
	}
