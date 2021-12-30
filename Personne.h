#pragma once
#include <iostream>
using namespace std;
class Personne
{
private:
	string nom;
	string adresse;
	long int numTel;
public:
	Personne(string N, string A, long int T);
	void printTel() const;
	void printAdress() const;
	void print()const;
	bool equalname(string nom)const;
};

