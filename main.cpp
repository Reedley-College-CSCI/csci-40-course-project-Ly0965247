// CSCI-40 Final Project
// Author: Lucas Yang

/* 
 * Description:
 * This program will allow the user to be able to create a Dungeons and Dragons
 * character and keep track of notes for quests, equipment, level, and stats.
*/


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct dndCharacter{
    string dndClass[12];
    int hitPoints;
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
    string equipment;
};

int main() {

    dndCharacter dnd_Class[12] = {
       {"Barbarian"},
       {"Bard"},
       {"Cleric"},
       {"Druid"},
       {"Fighter"},
       {"Monk"},
       {"Paladin"},
       {"Ranger"},
       {"Rogue"},
       {"Sorcerer"},
       {"Warlock"},
       {"Wizard"}
        };
            

        for (int i = 0; i < 12; ++i) {
            cout << dnd_Class[i].dndclass
            << " ";
        }


    return 0;
}
