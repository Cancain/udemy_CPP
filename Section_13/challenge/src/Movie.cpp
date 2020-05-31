#include "Movie.h"

std::string Movie::get_name() const {
  return _name;
}

void Movie::set_name(std::string name){
  _name = name;
}

Rating Movie::get_rating() const {
  return _rating;
}

void Movie::set_rating(Rating rating) {
  _rating = rating;
}

int Movie::get_watched() const {
  return _watched;
}

void Movie::increment_watched(){
  ++_watched;
}

Movie::Movie(std::string name, Rating rating, int watched)
      :_name{name}, _rating{rating}, _watched{watched}{}
