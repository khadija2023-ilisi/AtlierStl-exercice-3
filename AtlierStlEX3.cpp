// AtlierStlEX3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <typeinfo>
#include "Personne.h"
#include <unordered_map>
#include <algorithm> 
using namespace std;
bool printtelphone(unordered_multimap<string, Personne> U, string s) {
	unordered_multimap<string, Personne>::iterator t = U.find(s);
	if (t != U.end()) {
		t->second.printTel();
		return 1;
	}else
		return 0;
}bool printAdress(unordered_multimap<string, Personne> U, string s) {
	unordered_multimap<string, Personne>::iterator t = U.find(s);
	if (t != U.end()) {
		t->second.printAdress();
		return 1;
	}else
		return 0;
}
list<Personne> sort_UMM(unordered_multimap<string, Personne> U) 
{
	//extraire les mot-cles dans une liste
	list<Personne> personSorted ;
	list<string> aid;
	for (auto x : U)
		aid.push_back(x.first);
	aid.sort();
	for (auto x : aid) {
		auto it = U.find(x);
		personSorted.push_back(it->second);
	}
	return personSorted;
}

int main()
{
	list<Personne> per;
	unordered_multimap<string, Personne> UM_person;
	Personne P1("Fahmed", "darlamane", 66525632),
		P2("Koudia", "darsalam", 522145214),
		P3("Zanaa", "Switland", 7845210),
		P4("Amarita", "Desert", 123123);
	UM_person.insert(make_pair("Fahmed", P1));
	UM_person.insert(make_pair("Koudia", P2));
	UM_person.insert(make_pair("Zanaa", P3));
	UM_person.insert(make_pair("Amarita", P4));
	per = sort_UMM(UM_person);
	for (auto m : per)
		m.print();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
