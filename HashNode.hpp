#ifndef HASHNODE_HPP_
#define HASHNODE_HPP_

#include <iostream>
#include <string.h>
using namespace std;

class hashNode {
	friend class hashMap;
	string keyword;
	string *values;  // an array of all the words that follow the keyword in all the text documents

	int valuesSize;  
	int currSize;  
public:
	hashNode();
	hashNode(string s);
	hashNode(string s, string v);
	void addValue(string v); //adds a word to the list of words (teh values array) that follow the keyword
	void dblArray();  // if the values array is full, makes a new array twice the size of the current
					//array and then copies over all the old values.  
	string getRandValue(int check);  // generates a random number between 0 and the current size of the values array, and
							// returns the word in the values array at that random number.
};


#endif /* HASHNODE_HPP_ */
