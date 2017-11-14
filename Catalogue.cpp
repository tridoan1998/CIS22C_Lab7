/*
 * Catalogue.cpp
 *
 *  Created on: Nov 12, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "HashTable.h"
#include "Book.h"
#include "List.h"
#include <fstream>

using namespace std;
/*
int main()
{
	ifstream fin;
	fin.open("Catalogue.txt");
	if(fin.fail())
	{
		cout << "Fail to input file." << endl;
		exit(-1);
	}
	HashTable ht;

	string title, author;
	double price;
	unsigned isbn;
	string buf;

	while(getline(fin, buf))
	{
		title = buf;
		getline(fin, buf);
		author = buf;
		getline(fin, buf);
		price = stod(buf);
		getline(fin, buf);
		isbn = stoi(buf);
		getline(fin, buf);
		Book book(title, author, price, isbn);
		ht.insert(book);

	}

	  return 0;
}

*/
