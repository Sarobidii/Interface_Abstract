#include "JeuxFoot.hpp"
#include "JeuxStrategique.hpp"
#include "JeuxCombat.hpp"
#include <iostream>
using namespace std;
int main()
{
    JeuxFoot* fifa = new JeuxFoot();
    JeuxCombat* jeuCombat = new JeuxCombat();
    JeuxStrategique* jeuStrategique = new JeuxStrategique();
    int reponse;
    
    cout << "1-Jouer au fifa" << endl;
    cout << "2-Jouer au jeu de combat" << endl;
    cout << "3-Jouer à un jeu stratégique" << endl;
    cin >> reponse;
    switch (reponse)
    {
        case 1:
            fifa->start();
            fifa->pause();
            cin.ignore();
            fifa->restart();
            fifa->exit();
            break;
        case 2:
            jeuCombat->start();
            jeuCombat->pause();
            cin.ignore();
            jeuCombat->restart();
            jeuCombat->exit();
            break;
        case 3:
            jeuStrategique->start();
            jeuStrategique->pause();
            cin.ignore();
            jeuStrategique->restart();
            jeuStrategique->exit();
    }
    return 0;
}
