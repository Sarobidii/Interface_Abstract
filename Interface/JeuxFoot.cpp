#include "Jeux.hpp"
#include "JeuxFoot.hpp"
#include <iostream>
using namespace std;
JeuxFoot::JeuxFoot()
{
}
JeuxFoot::~JeuxFoot()
{
}
void JeuxFoot::nouvellePartie()
{
    cout << "Entrez le nombre de joueur : ";
    cin >> nombreJoueur;
    score = 0; 
}
void JeuxFoot::revenirAncienPartie()
{
    nombreJoueur = ancienNombreDeJoueur;
    score = ancienScore;
}
void JeuxFoot::start()
{
    cout << "Démarrage d'un match de football..." << endl; 
}
void JeuxFoot::exit()
{
    ancienScore = score;
    ancienNombreDeJoueur = nombreJoueur;
    nombreJoueur = 0;
    score = 0;
    nombreJoueur = 0;
    cout << "A la prochaine";
}
void JeuxFoot::pause()
{
    cout << "Le match de football est en pause. Appuyez sur une touche pour continuer..." << endl;
    cin.ignore(); 
}
void JeuxFoot::restart()
{
    cout << "Nouveau match";
}