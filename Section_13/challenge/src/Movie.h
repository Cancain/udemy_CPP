#include <string>

enum Rating {
  none,
  G,
  PG,
  PG13,
  R
};

class Movie {
  private:
    std::string _name;
    Rating _rating;
    int _watched;

  public:
    std::string get_name() const;
    void set_name(std::string const name);

    Rating get_rating() const;
    void set_rating(Rating const rating);

    int get_watched() const;
    void increment_watched();

    Movie(std::string const name, Rating const rating = none, int const watched = 1);
};
