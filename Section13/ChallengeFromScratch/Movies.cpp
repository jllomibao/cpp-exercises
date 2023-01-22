/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

bool Movies::is_movie_in_list(const string name) const
{
    bool status {false};
    for(const auto &movie: movies)
    {
        if(movie.get_name() == name)
        {
            status = true;
            break;
        }
    }
    return status;
}

void Movies::add(const string name, const string rating, int count)
{
    if(is_movie_in_list(name))
    {
        cout << "The movie, " << name << ", is already in list!" << endl;
    }
    else
    {
        movies.push_back(Movie{name, rating, count});
    }
}

void Movies::watch(const string name)
{
    if(is_movie_in_list(name))
    {
        for(auto &movie: movies)
        {
            if(movie.get_name() == name)
            {
                movie.increment_count();
            }
        }
    }
    else
    {
        cout << "The movie, " << name << ", is not yet available." << endl;
    }
}

void Movies::display_all(void) const
{
    cout << "-------------------" << endl;
    cout << "Name, Rating, Count" << endl;
    cout << "-------------------" << endl;
    for(const auto movie: movies)
    {
        movie.display();
    }
    cout << "-------------------" << endl;
    cout << endl;
}
