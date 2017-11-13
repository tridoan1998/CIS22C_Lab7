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

int main()
{

	HashTable ht;
	Book pp("Pride and Prejudice", "Jane Austen", 4.95, 1234567);
	Book c("Contact", "Carl Sagan", 9.95, 99993339);
	Book hg("The Hunger Games", "Suzanne Collins", 13.55, 12388888);
	Book hp("Harry Potter", "J.K. Rowlings", 12.99, 55555678);
	Book mhc("The Man in the High Castle", "Philip K Dick", 15.95, 95959595);
	Book bh("Bleak House", "Charles Dickens", 8.00, 473890238);

	ht.insert(pp);

	int index = ht.hash(pp.get_title() + pp.get_author());
	cout << index;
	ht.insert(c);
	ht.insert(hg);
	ht.insert(mhc);
	ht.insert(bh);

	ht.printBucket(cout, index);
	ht.printTable(cout);
	cout << ht.search(pp);

	return 0;
}
