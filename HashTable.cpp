/*
 * HashTable.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */



#include <iostream>
#include <iomanip>
#include <string>
#include "HashTable.h"
#include "List.h"
#include <assert.h>
#include "Book.h"
using namespace std;

int HashTable::hash(string key) const
{
	int index, sum = 0;
	for (unsigned int i = 0; i < key.length(); i++)
	{
		sum += (int)key[i];
	}
	index = sum % 10;
	return index;
}

int HashTable::countBucket(int index) const
{
	return 0;
}
//counts the number of Books at this index
//returns the count
//pre: 0<= index < SIZE

void HashTable::insert(Book b)
{
	string key = b.get_title() + b.get_author();
	int index = hash(key);
	Table[index].insertStop(b);
}

void HashTable::remove(Book b)
{

	string key = b.get_title() + b.get_author();
	int index = hash(key);
	if(!Table[index].isEmpty())
	{
	Table[index].pointIterator();
    int position = Table[index].linearSearch(b);
	Table[index].advanceToIndex(position);
	Talbe[index].
	}
;
}
//removes b from the table
//calls the hash function on the key to determine
//the correct bucket
//pre: b is in the table
