#pragma once
#include "Libraries.h"
#include "Rendering.h"

void Print_New_Ability();

void Print_Crown();

void Print_Heart();

void Print_Shield();

void Print_Card();

class Cards {
public:
	Cards ();
	Cards(bool A, int T);
	Cards(const Cards& r);
	const Cards& operator=(const Cards& r);
	~Cards ();

	bool Get_Ability();
	int Get_Ability_Type();

private:
	bool Ability;
	int Ability_Type;
};

Cards Create_Card();