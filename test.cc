
#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, double> prices = {
        {"banana", 0.99},
        {"apple", 1.49},
        {"pear", 1.29}
    };

    std::string fruit;
    double price;

    while (true) {
        std::cout << "Enter a fruit name (or 'done' to quit): ";
        std::cin >> fruit;
        if (fruit == "done") {
            break;
        }

        std::cout << "Enter price for " << fruit << ": ";
        std::cin >> price;
        prices[fruit] = price;
    }

    std::cout << "\nFruit prices:\n";
    for (const auto& [name, p] : prices)
        std::cout << " " << name << ": $" << p << "\n";
    
    std::cout << "Raising prices by 10%" << "\n";
    double percent = .1;
    for (std::map<std::string,double>::iterator it = prices.begin(); it != prices.end(); ++it) {
        it ->second *= (1.0 + percent);
    }

    std::cout << "\nNew Fruit prices:\n";
    for (const auto& [name, p] : prices)
        std::cout << " " << name << ": $" << p << "\n";
    return 0;
}