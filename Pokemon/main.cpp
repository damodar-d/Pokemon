#include <iostream>
#include <string>
using namespace std;

int main()
{

    string playerName;
    string chosenPokemon = "";

    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
    cout << "Professor Oak: My name is Oak. People call me the Pokemon "
            "Professor!\n";
    cout << "Professor Oak: But enough on me. Let's talk about you!\n";

    cout << "Professor Oak: First, tell me, what’s your name?\n";
    cout << "Enter your name: ";
    cin >> playerName;

    cout << "Professor Oak: Ah, " << playerName
         << "! What a fantastic name!\n";
    cout << "Professor Oak: You must be eager to start your adventure. But "
            "first, you’ll need a Pokemon of your own!\n";

    cout << "Professor Oak: For now, I have three Pokémon for you to choose from.\n";
    cout << "You can choose one of the following Pokémon:\n";
    cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
    cout << "Which Pokémon would you like to choose? Enter the number: ";

    int choice;
    cout << "Professor Oak: So, which one will it be? Enter the number of "
            "your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        chosenPokemon = "Bulbasaur";
        cout << "You have chosen Bulbasaur! A grass-type Pokémon." << endl;
        break;

    case 2:
        chosenPokemon = "Charmander";
        cout << "You have chosen Charmander! A fire-type Pokémon." << endl;
        break;

    case 3:
        chosenPokemon = "Squirtle";
        cout << "You have chosen Squirtle! A water-type Pokémon." << endl;
        break;

    default:
        cout << "Invalid choice. Please restart the game and choose a valid Pokémon." << endl;
        break;
    }
    cout << "Ah, an excellent choice!\n";

    cout << "Professor Oak: " << chosenPokemon << " and you, "
         << playerName << ", are going to be the best of friends!\n";
         
    cout << "Professor Oak: Your journey begins now! Get ready to explore "
            "the vast world of Pokemon!\n";

    cout << "But beware, Trainer,\n";
    cout << "this is only the beginning.\n";
    cout << "Your journey is about to unfold.\n";
    cout << "Now let’s see if you’ve got what it takes to keep going!\n";
    cout << "Good luck, and remember… Choose wisely!\n";

    return 0;
}
