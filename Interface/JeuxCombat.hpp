#include <iostream>
using namespace std;
#include <string>
using namespace std;
class JeuxCombat:public Jeux 
{
    private:
        string arme;
        int niveauDeVie;
    public:
        JeuxCombat();
        ~JeuxCombat();
        void start();
        void exit();
        void pause();
        void restart();
};