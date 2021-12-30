#include "Personne.h"

Personne::Personne(string N, string A, long int T)
{
	this->nom = N;
	this->adresse = A;
	this->numTel = T;
}

void Personne::printTel() const
{
	cout << "\tNum telephone : " << this->numTel<< endl;
}

void Personne::printAdress() const
{
	cout << "\tAdresse : " << this->adresse << endl;
}

void Personne::print() const
{
	cout << "\Nom : " << this->nom << endl;
	this->printAdress(); this->printTel();
	cout << endl;
}

bool Personne::equalname(string nom) const
{
	return nom==this->nom;
}
