#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "what's your name?: ";
    // std::cin >> name; // If you put spaces in the string the string will cutoff at the space
    std::getline(std::cin >> std::ws, name);
    // If you were to switch the age and name input around you would get an issue because the getline() would grab the \n in the buffer for the age so to fix that you >> std::ws inside the getline() to prevent that from grabbing whitespaces.

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old";

    return 0;
}