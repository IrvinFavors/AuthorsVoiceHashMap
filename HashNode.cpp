

#include "hashMap.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;



hashNode::hashNode(string s){
	keyword = s;
	values = new string[100];
	valuesSize = 100;
	currSize = 0;
	srand(time(NULL));
}
hashNode::hashNode(){
	keyword = "";
	values = new string[100];
	valuesSize = 100;
	currSize = 0;
	srand(time(NULL));
}
hashNode::hashNode(string s, string v){
	keyword = s;
	values = new string[100];
	values[0] = v;
	valuesSize = 100;
	currSize = 1;
}
void hashNode::addValue(string v) {
	values[currSize] = v;
}
void hashNode::dblArray() {
	string newValues[valuesSize*2];
	for (int i = 0; i < valuesSize; ++i){
		newValues[i] = values[i];
	}
	values = newValues;

}

string hashNode::getRandValue(int check) {
	if (check == -1) return "";
	if (currSize == 0) return "";
	return values[rand()%currSize];

}
