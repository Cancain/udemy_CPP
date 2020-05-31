#include "Movie.h"
#include <vector>

class Movies{
  private:
    std::vector<Movie*> _movies;

    int _get_movie_index(const std::string name);

  public:
    bool add_movie(std::string const name, Rating const rating = none, int const watched = 1);
    bool remove_movie(std::string const name);

    bool increment_watched(std::string const name);

    void display_movies() const;
  
    ~Movies();
};
