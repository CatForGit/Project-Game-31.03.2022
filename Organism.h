#pragma once
#include "Libraries.h"
#include "Rendering.h"
#include "Cards.h"

class Organism
{
public:
	Organism();
	~Organism();
	Organism(int H, int P, int D, int S_, int D_);
	Organism(const Organism& r);
	const Organism& operator=(const Organism& r);

	inline int GetHealth();
	inline int GetProtection();
	inline int GetDamage();
	inline void AddHealth(int meaning);
	inline void AddProtection(int meaning);
	inline void AddDamage(int meaning);
	inline void AssignHealth(int meaning);
	inline void AssignProtection(int meaning);
	inline void AssignDamage(int meaning);

protected:
	int health;
	int protection;
	int damage;
	int security_settings;
	int damage_settings;
};

class Hero: public Organism {
public:
	Hero();
	~Hero();
	Hero(int H, int P, int D, int S_, int D_);
	Hero(const Hero& r);
	const Hero& operator=(const Hero& r);
	friend class Cards;
	friend class Mob;
	bool Figt_with_Mob();
	bool Fight_with_Boss();
	int Play(std::vector<std::vector<int>>& Map);
	inline int Get_X();
	inline int Get_Y();
	inline bool GetFlag_H();
	inline bool GetFlag_P();
	inline bool GetFlag_D();
	void Install_flag_H(bool meaning);
	void Install_flag_P(bool meaning);
	void Install_flag_D(bool meaning);
	
private:
	int Temp_Symbol;
	const int Person;
	int X;
	int Y;
	bool flag_H;
	bool flag_P;
	bool flag_D;
};

class Mob: public Organism {
public:
	Mob();
	~Mob();
	Mob(int H, int P, int D, int S_, int D_);
	Mob(const Mob& r);
	const Mob& operator=(const Mob& r);

	inline int Get_Type();
	std::string Dialog(int marker);
private:
	int type;
};
