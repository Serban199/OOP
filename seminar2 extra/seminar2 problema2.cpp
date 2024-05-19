// seminar2 problema2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<cstring>
#include <iostream>
#include "Movie.h"
using namespace std;
void Movie::set_name(const char name[256])
{
	strcpy_s(movieName, name);

}
void Movie::set_length(int time)
{
	movielength = time;

}
void Movie::set_score(double score)
{
	IMDBscore = score;

}
void Movie::set_year(int year)
{
	yeraofrelease = year;

}
void movie_compare_score(Movie& m1, Movie& m2)
{
	if (m1.IMDBscore==m2.IMDBscore)
		cout << "Egalitate";
	else if (m1.IMDBscore>m2.IMDBscore)
		cout << m1.movieName;
	else
		cout << m2.movieName;
	cout << '\n';
}
void movie_compare_name(Movie& m1, Movie& m2)
{
	if (strcmp(m1.movieName, m2.movieName) == 0)
		cout << "Egalitate";
	else if (strcmp(m1.movieName, m2.movieName) > 0)
		cout << m1.movieName;
	else
		cout << m2.movieName;
	cout << '\n';
}

void movie_compare_year(Movie& m1, Movie& m2)
{
	if (m1.yeraofrelease == m2.yeraofrelease)
		cout << "Egalitate";
	else if (m1.yeraofrelease > m2.yeraofrelease)
		cout << m1.movieName;
	else
		cout << m2.movieName;
	cout << '\n';
}
void movie_compare_length(Movie& m1, Movie& m2)
{
	if (m1.movielength == m2.movielength)
		cout << "Egalitate";
	else if (m1.movielength > m2.movielength)
		cout << m1.movieName;
	else
		cout << m2.movieName;
	cout << '\n';
}