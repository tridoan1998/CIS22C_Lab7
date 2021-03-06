/*
 * HashTest.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "HashTable.h"
#include "Book.h"
#include "List.h"
using namespace std;
/*
int main()
{
	cout << endl <<  "********* Test HashTable constructor and Book constructor ********" << endl;
	// Test Create Book
	HashTable ht; // create object ht
	Book pp("Pride and Prejudice", "Jane Austen", 4.95, 1234567);
	Book c("Contact", "Carl Sagan", 9.95, 99993339);
	Book hg("The Hunger Games", "Suzanne Collins", 13.55, 12388888);
	Book hp("Harry Potter", "J.K. Rowlings", 12.99, 55555678);
	Book mhc("The Man in the High Castle", "Philip K Dick", 15.95, 95959595);
	Book bh("Bleak House", "Charles Dickens", 8.00, 473890238);
	cout << endl <<  "********* Test insert ********" << endl;
	// Test Insert
	ht.insert(pp);
	ht.insert(c);
	ht.insert(hg);
	ht.insert(mhc);
	ht.insert(bh);
	cout << endl <<  "********* Test countBucket ********" << endl;
	// Test countBucket
	cout << ht.countBucket(9) << endl;
	cout << endl <<  "********* Test search and remove ********" << endl;
	cout << ht.search(hg) << endl;
	cout << ht.search(mhc) << endl;
	ht.remove(hg);
	cout << ht.search(hg) << endl;

	cout << endl <<  "********* Test printBucket ********" << endl;
	// test printBucket (also tested the << overload of Book.h)
	ht.printBucket(cout, 9);
	cout << endl <<  "********* Test printTable ********" << endl;
	// Test printTable()
	ht.printTable(cout);
	return 0;
}

*/
