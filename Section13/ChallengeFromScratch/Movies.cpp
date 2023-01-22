/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

bool Movies::is_movie_in_list(string name)
{
    bool status {false};
    for(auto &movie: movies)
    {
        if(movie.get_name() == name)
        {
            status = true;
            break;
        }
    }
    return status;
}

void Movies::add(string name, string rating, int count)
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

void Movies::watch(string name)
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

void Movies::display_all(void)
{
    cout << "-------------------" << endl;
    cout << "Name, Rating, Count" << endl;
    cout << "-------------------" << endl;
    for(auto movie: movies)
    {
        cout << movie.get_name() << ", ";
        cout << movie.get_rating()<< ", ";
        cout << movie.get_count() << endl;
    }
    cout << "-------------------" << endl;
}
