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
    bool is_movie_in_list(string name);

public:
    void add(string name, string rating, int count);
    void watch(string name);
    void display_all(void);
};

#endif // _MOVIES_H_
