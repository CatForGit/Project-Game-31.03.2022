#pragma once
#include "Libraries.h"

std::string Labyrinth_drawing(std::vector<std::vector<int>>& Labyrinth);

std::string Drow_Fight(std::vector<std::vector<int>>& vec1, std::vector<std::vector<int>>& vec2, std::vector<std::vector<int>>& vec3);

//void Drow_Attak(std::vector<std::vector<int>>& vec1, std::vector<std::vector<int>>& vec2, int counter);
void Clear_Consol();
void Print_you_lose();
void Print_you_won();
void Drow_Earth();

/*
std::string Drow_Monster_1();
std::string Drow_Monster_2();
std::string Drow_Monster_3();
std::string Drow_Hero_1();
std::string Drow_Boss();
std::string Drow_Sword();
std::string Drow_Healing();
std::string Drow_Shield();

*/

