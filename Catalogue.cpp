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

int main()
{
	  string line;
	  ifstream myfile ("Catalogue.txt");
	  if (myfile.is_open())
	  {
	    while ( getline (myfile,line) )
	    {
	      cout << line << '\n';
	    }
	    myfile.close();
	  }

}


