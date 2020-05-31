#include "Movie.h"

std::string Movie::get_name() const {
  return _name;
}

void Movie::set_name(std::string const name){
  _name = name;
}

Rating Movie::get_rating() const {
  return _rating;
}

void Movie::set_rating(Rating const rating) {
  _rating = rating;
}

int Movie::get_watched() const {
  return _watched;
}

void Movie::increment_watched(){
  ++_watched;
}

Movie::Movie(std::string const name, Rating const rating, int const watched)
      :_name{name}, _rating{rating}, _watched{watched}{}
