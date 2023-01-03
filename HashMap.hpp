
#ifndef HASHMAP_HPP_
#define HASHMAP_HPP_


#include "hashNode.hpp"

class hashMap {
	friend class makeSeuss;
	hashNode **map;  
	string first; // for first keyword for printing to a file
	int numKeys;  // Number of keys currently in the hashMap
	int mapSize;  // total size of the hashMap array
	bool hashfn;  // a bool indicating whether to use hash 
			//function 1 or hash function 2 
	bool collfn;  // a bool indicating whether to use the 
			//collision function 1 or the collision function 
			//2 
	int collisions;  // number of collisions using the 
			//collision-handling method
	int hashcoll; //number of initial collisions using just 
			//the hash function

public:
	hashMap(bool hash1, bool coll1);  
	void addKeyValue(string k, string v);
	void checkValsSize(int h);

	int getIndex(string k); // uses calcHash and reHash to 
			// calculate and return the index of where
			// the keyword k should be inserted into the map 
			// array
	int calcHash(string k);
			//Helper function used to negate having to write conditional
			//statements when wanting to call the calcHash functions
	int calcHash1(string k);
	int calcHash2(string k);
	int getClosestPrime(int curr);
			//Returns the closest prime number of the argument,
			//which in this case would be the closest prime number to double
			//the mapSize to.
	void reHash();  // when size of array is at 70%, double 
			//array size and rehash keys
	int coll(int h, string k);
			//Helper function used to determine which collision function to call
			//rather than using conditional statments
	int coll1(int h, string k);  // a probing method
			//for collisions (when index is already full)
	int coll2(int h, string k);  // a different method
			//for dealing with collisions
	void printMap();
};


#endif /* HASHMAP_HPP_ */
