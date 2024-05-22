#include "Vehicule.hpp"
#include <string>
using namespace std;
void Vehicule::setNombreDeRoues(int nombreDeRoues)
{
    this->nombreDeRoues = nombreDeRoues;
}
void Vehicule::setPrix(double prix)
{
    this->prix = prix;
}
void Vehicule::setCouleur(string couleur)
{
    this->couleur = couleur; 
}
void Vehicule::setMarque(string marque)
{
    this->marque = marque;
}
int Vehicule::getNombreDeRoues()
{
    return(nombreDeRoues);
}
double Vehicule::getPrix()
{
    return(prix);
}
string Vehicule::getCouleur()
{
    return(couleur);
}
string Vehicule::getMarque()
{
    return(marque);
}