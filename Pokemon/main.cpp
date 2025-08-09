#include <iostream>
#include <string>
using namespace std;

int main()
{

    string playerName;

    cout << "Enter your name: ";
    cin >> playerName;

    cout << "Great Start " << playerName << ", looks like you have understood the main() function properly now!" << endl;

    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You have chosen Bulbasaur! A grass-type Pokémon." << endl;
        break;

    case 2:
        cout << "You have chosen Charmander! A fire-type Pokémon." << endl;
        break;

    case 3:
        cout << "You have chosen Squirtle! A water-type Pokémon." << endl;
        break;

    default:
        cout << "Invalid choice. Please restart the game and choose a valid Pokémon." << endl;
        break;
    }

    cout << "Ah, an excellent choice!\n";
    cout << "But beware, Trainer,\n";
    cout << "this is only the beginning.\n";
    cout << "Your journey is about to unfold.\n";
    cout << "Now let’s see if you’ve got what it takes to keep going!\n";
    cout << "Good luck, and remember… Choose wisely!\n";

    return 0;
}
