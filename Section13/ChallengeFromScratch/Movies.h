/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movie as a std::vector
 *  implement these methods in Movies.cpp
 *
 * ***************************************************************/

#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies
{
private:
    vector<Movie> movies;
    bool is_movie_in_list(const string name) const;

public:
    void add(const string name, const string rating, int count);
    void watch(const string name);
    void display_all(void) const;
};

#endif // _MOVIES_H_
