#include <iostream>
using namespace std;
class JeuxStrategique:public Jeux 
{
    public:
        JeuxStrategique();
        ~JeuxStrategique();
        void start();
        void exit();
        void pause();
        void restart();
};