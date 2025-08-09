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

    if(choice == 1) {
        cout << "You have chosen Bulbasaur! A grass-type Pokémon." << endl;
    } else if(choice == 2) {
        cout << "You have chosen Charmander! A fire-type Pokémon." << endl;
    } else if(choice == 3) {
        cout << "You have chosen Squirtle! A water-type Pokémon." << endl;
    } else {
        cout << "Invalid choice. Please restart the game and choose a valid Pokémon." << endl;
    }

    return 0;
}
