#include <iostream>
#include <limits>
#include <random>

int main() {
    std::cout << "Enter the number of sides on your dice? ";
    int maxValue;
    std::cin >> maxValue;

    std::random_device sd;
    std::seed_seq seed{sd(),sd(),sd(),sd()};
    std::mt19937 mt(seed);
    
    std::uniform_int_distribution<int> dist(1,maxValue);
    
    std::cout << "How many times would you like to roll? ";
    int rollNum;
    std::cin >> rollNum;
    
    for (int i=0;i<rollNum;i++) {
        std::cout << dist(mt) << "\n";

    }

    std::cout << "Press Enter to exit the program ";
    std::cin.clear(); 
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get(); 
    return 0;
}