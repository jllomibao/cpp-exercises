/******************************************************************
 * Section 13 Challenge
 * Movie.h
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
using namespace std;

class Movie
{
private:
    string name;
    string rating;
    int count;

public:
    Movie(string n = "None", string r = "PG-13", int c = 0)
    : name{n}, rating{r}, count{c} {}

    string get_name(void) const { return name; }
    void increment_count(void) { count++; }
    void display(void) const;
};

#endif // _MOVIE_H_
