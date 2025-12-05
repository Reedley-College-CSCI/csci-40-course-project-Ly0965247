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
void printCharacter();

int main() {

    dndCharacter sheet1;
    dndCharacter dnd_Class[12] = {
       {"Barbarian"}, {"Bard"}, {"Cleric"}, {"Druid"},
       {"Fighter"}, {"Monk"}, {"Paladin"}, {"Ranger"},
       {"Rogue"}, {"Sorcerer"}, {"Warlock"}, {"Wizard"}
    };
    char question;
        ofstream outputfile("characterSheet.txt");

        if (!outputfile.is_open()) {
            cout << "Error opening character sheet.";
                return 1;
        }

        cout << "Enter character name: ";
        getline(cin, sheet1.characterName);

        cout << "Enter character class ";
        for (int i = 0; i < 12; ++i) {
            cout << "(" << i + 1 << " " << dnd_Class[i].dndClassName
                << ")" << ", ";
        }
        cout << ":" << endl;
        getline(cin, sheet1.dndClassName);

        
        cout << "Enter character stats" << endl;
        cout << "Strength: ";
        cin >> sheet1.strength;
        if (sheet1.strength < 1 || sheet1.strength > 20) {
            cout << "Error please input a number between 1 and 20." << endl;
            cin >> sheet1.strength;
        }

        cout << "Dexterity: ";
        cin >> sheet1.dexterity;
        if (sheet1.strength < 1 || sheet1.strength > 20) {
            cout << "Error please input a number between 1 and 20." << endl;
            cin >> sheet1.strength;
        }

        cout << "Constitution: ";
        cin >> sheet1.constitution;
        if (sheet1.strength < 1 || sheet1.strength > 20) {
            cout << "Error please input a number between 1 and 20." << endl;
            cin >> sheet1.strength;
        }

        cout << "Intelligence: ";
        cin >> sheet1.intelligence;
        if (sheet1.strength < 1 || sheet1.strength > 20) {
            cout << "Error please input a number between 1 and 20." << endl;
            cin >> sheet1.strength;
        }

        cout << "Wisdom: ";
        cin >> sheet1.wisdom;

        if (sheet1.strength < 1 || sheet1.strength > 20) {
            cout << "Error please input a number between 1 and 20." << endl;
            cin >> sheet1.strength;
        }

        cout << "Charisma: ";
        cin >> sheet1.charisma;
        if (sheet1.strength < 1 || sheet1.strength > 20) {
            cout << "Error please input a number between 1 and 20." << endl;
            cin >> sheet1.strength;
        }


        if (outputfile.is_open()) {
            outputfile << "Character Name: " << sheet1.characterName << endl;
            outputfile << "Class: " << sheet1.dndClassName << endl;
            outputfile << "Strength: " << sheet1.strength << endl;
            outputfile << "Dexterity: " << sheet1.dexterity << endl;
            outputfile << "Constitution: " << sheet1.constitution << endl;
            outputfile << "Intelligence: " << sheet1.intelligence << endl;
            outputfile << "Wisdom: " << sheet1.wisdom << endl;
            outputfile << "Charisma: " << sheet1.charisma << endl;
           
            outputfile.close();
            cout << "Character successfully saved!";
        }
        else {
            cout << "Unable to save your character." << endl;
        }

        cout << " Would you like to see your character? (Y/N)" << endl;
        cin >> question;

        if (question == 'Y' || 'y') {
            printCharacter();
        }

    return 0;
}

void printCharacter()
{
    ifstream inputfile("characterSheet.txt");
    if (inputfile.is_open()) {
        cout << "Character sheet opened successfully." << endl;
    }
    else {
        cout << " Error opening character sheet.";
    }
        string line;
        while (getline(inputfile, line)) {
        
            cout << line << endl;
       
       }
}
 