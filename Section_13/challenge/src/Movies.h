#include "Movie.h"
#include <vector>

class Movies{
  private:
    std::vector<Movie*> _movies;

    int _get_movie_index(const std::string name);

  public:
    bool add_movie(std::string name, Rating rating = none, int watched = 1);
    bool remove_movie(std::string);

    bool increment_watched(std::string name);

    void display_movies() const;
  
    ~Movies();
};
