#include "Movies.h"

int main(int argc, char *argv[]){
  Movies current_movies;
  current_movies.add_movie("Star wars", PG, 3);
  current_movies.increment_watched("Star wars");
  current_movies.increment_watched("sdasdas");
  current_movies.display_movies();
  return 0;
}
