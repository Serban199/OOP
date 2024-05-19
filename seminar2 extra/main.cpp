#include <iostream>
#include "Movie.h";
using namespace std;
int main() {
    Movie ep5;
    ep5.set_name("Star Wars: Episode V - The Empire Strikes Back");
    ep5.set_score(8.7);
    ep5.set_year(1980);
    ep5.set_length(124);

    Movie ep4;
    ep4.set_name("Star Wars: Episode IV - A New Hope");
    ep4.set_score(8.6);
    ep4.set_year(1977);
    ep4.set_length(121);

    Movie ep6;
    ep6.set_name("Star Wars: Episode VI - Return of the Jedi");
    ep6.set_score(8.3);
    ep6.set_year(1983);
    ep6.set_length(131);

    
    movie_compare_name(ep4, ep5),
        movie_compare_year(ep4, ep5),
        movie_compare_score(ep4, ep5),
        movie_compare_length(ep4, ep5);


        return 0;
}
