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
	assert(0 <= index && index < SIZE);
	return Table[index].getSize();
}

int HashTable::search(Book b) const
{
	string key = b.get_title() + b.get_author();
	int index = hash(key);
	if(Table[index].isEmpty())
		return -1;
	else if (Table[index].linearSearch(b) == -1)
	{
		return -1;
	}
	else
	{
		return index;
	}
}

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
		Table[index].removeIterator();
	}
	else
	{
		cout << "The book is not on the list."<< endl;
	}
	/*assert(search(b) != -1);
		int index = search(b);
		int Index_In_Bucket = Table[index].linearSearch(b);
		Table[index].pointIterator();
		for (int i = 1; i < Index_In_Bucket; i++)
		{
			Table[index].advanceIterator();
		}
		Table[index].removeIterator();
		*/
}

void HashTable::printBucket(ostream& out, int index) const
{
	assert(0 <= index && index < SIZE);
	Table[index].print();
}

void HashTable::printTable(ostream& out) const
{
	cout << "Books in the Catalogue:" << endl;
	for(int index = 0; index < SIZE; index++)
	{
		if(Table[index].isEmpty())
		{
			continue;
		}
		else
		{
			cout << "Group " << index+1 << endl;
			cout << Table[index].getStart() << endl;
			cout << "+" << countBucket(index) -1 << " more similar book(s)" << endl << endl << endl;
		}
	}
}
