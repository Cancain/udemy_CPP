#include <iostream>
#include "Movies.h"

int Movies::_get_movie_index(const std::string name){
  for (int i{0}; i < _movies.size(); ++i){
    if(_movies.at(i)->get_name() == name){
      return i;
    }
  }
  return -1;
}

bool Movies::add_movie(std::string name, Rating rating, int watched){
  if(_get_movie_index(name) == -1){
    Movie *new_movie = new Movie(name, rating, watched);
    _movies.push_back(new_movie);
    return true;
  }

  std::cout << "Movie already added" << std::endl;
  return false;
}

bool Movies::remove_movie(std::string name){
  const int position = _get_movie_index(name);
  if(position >= 0){
    delete _movies.at(position);
    _movies.erase(_movies.begin() + position);
    return true;
  }
  return false;
}

bool Movies::increment_watched(std::string name){
  const int position = _get_movie_index(name);
  if(position >= 0){
    _movies.at(position)->increment_watched();
    return true;
  }
  std::cout << "No movie by the name: " << name << std::endl;
  return false;
}

void Movies::display_movies() const {
  if(_movies.size() > 0){
    std::cout << "==============================" << std::endl;
  } else {
    std::cout << "No movies added..." << std::endl; 
  }

  for(Movie *movie : _movies){
    std::cout 
      << movie->get_name() 
      << ", "
      << movie->get_rating()
      << ", "
      << movie->get_watched()
      << std::endl;
  }

  if(_movies.size() > 0){
    std::cout << "==============================" << std::endl;
  }
}
Movies::~Movies(){
  for (Movie *movie : _movies){
    delete movie;
  }
}
