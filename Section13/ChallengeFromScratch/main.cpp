/******************************************************************
 * Section 13 Challenge
 * main.cpp
 * 
 * Test the Movies project
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

const string MOVIE_NAME_1 {"Breakfast at Tiffany's"};
const string MOVIE_NAME_2 {"Back to the Future"};
const string MOVIE_NAME_3 {"Shrek"};
const string MOVIE_NAME_4 {"Lethal Weapon"};

int main() {
	Movies movies;

	cout << "Add 3 movies to the list" << endl;
	movies.add(MOVIE_NAME_1, "PG-13", 0);
	movies.add(MOVIE_NAME_2, "PG", 0);
	movies.add(MOVIE_NAME_3, "G", 0);
	movies.display_all();

	cout << "Watch movies 1 and 3" << endl;
	movies.watch(MOVIE_NAME_1);
	movies.watch(MOVIE_NAME_3);
	movies.display_all();

	cout << "Add duplicate movie" << endl;
	movies.add(MOVIE_NAME_2, "PG", 0);
	movies.display_all();

	cout << "Watch a movie that has not been added" << endl;
	movies.watch(MOVIE_NAME_4);
	movies.display_all();

	cout << "Add a movie that has been watched a few times" << endl;
	movies.add(MOVIE_NAME_4, "R", 5);
	movies.display_all();

	return 0;
}
