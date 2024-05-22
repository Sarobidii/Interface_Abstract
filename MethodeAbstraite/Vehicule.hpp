#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>
using namespace std;
class Vehicule {
	private:
		int nombreDeRoues;
		double prix;
		string marque;
		string couleur;
	public:
		virtual void conduire() = 0;
		void setNombreDeRoues(int nombreDeRoues);
		void setPrix(double prix);
		void setCouleur(string couleur);
		void setMarque(string marque);
		int getNombreDeRoues();
		double getPrix();
		string getCouleur();
		string getMarque();
};
#endif
