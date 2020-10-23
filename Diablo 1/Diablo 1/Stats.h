#pragma once
class Stats
{
public:
	Stats(int aStrValue, int aDexValue, int aConValue);

	int GetDex() const;
	int GetStr() const;
	int GetCon() const;
	int GetAttack() const;
	int GetMaxHealth() const;
	int GetCurrentHealth() const;
	int GetCarryCap() const;
	int GetDefense() const;

	void DoDamage(int aDamageValue);
private:
	int myDex;
	int myStr;
	int myCon;

	int myAttack;
	int myMaxHealth;
	int myCurrentHealth;
	int myCarryCap;
	int myDefense;
};

