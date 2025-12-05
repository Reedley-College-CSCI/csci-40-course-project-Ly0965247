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
    string dndClassName;
    string characterName;
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

    dndCharacter sheet1;
    dndCharacter dnd_Class[12] = {
       {"Barbarian"}, {"Bard"}, {"Cleric"}, {"Druid"},
       {"Fighter"}, {"Monk"}, {"Paladin"}, {"Ranger"},
       {"Rogue"}, {"Sorcerer"}, {"Warlock"}, {"Wizard"}
    };
     

        for (int i = 0; i < 12; ++i) {
            cout << dnd_Class[i].dndClassName
            << " ";
        }
        cout << endl;

        ofstream outputfile("characterSheet.txt");

        if (!outputfile.is_open()) {
            cout << "Error opening character sheet.";
                return 1;
        }

        cout << "Enter character name: ";
        getline(cin, sheet1.characterName);

        if (outputfile.is_open()) {
            outputfile << "Character Name: " << sheet1.characterName << endl;

            outputfile.close();
            cout << "Character successfully saved!";
        }
        else {
            cout << "Unable to save your character." << endl;
        }

    return 0;
}
