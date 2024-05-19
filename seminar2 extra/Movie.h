#pragma once
class Movie
{
public:
	char movieName[256];
	int yeraofrelease;
	double IMDBscore;
	int movielength;
public:
	
	void set_name(const char name[256]);
	void set_score(double score);
	void set_year(int year);
	void set_length(int time);


};

	void movie_compare_name(Movie& m1,Movie&m2);
	void movie_compare_score(Movie& m1, Movie& m2);
	void movie_compare_year(Movie& m1, Movie& m2);
	void movie_compare_length(Movie& m1, Movie& m2);

