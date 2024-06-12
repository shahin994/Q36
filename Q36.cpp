#include <iostream>
#include <string>

class RestaurantSystem {
private:
    std::string selectedMenu;

public:
    void setMenu(const std::string &menu) {
        selectedMenu = menu;
    }

    void addValue() {
        if (selectedMenu == "Salad") {
            std::cout << "Adding extra greens and dressing for the Salad." << std::endl;
        } else if (selectedMenu == "Pasta") {
            std::cout << "Adding special sauce and cheese for the Pasta." << std::endl;
        } else if (selectedMenu == "Steak") {
            std::cout << "Grilling the Steak to perfection." << std::endl;
        } else {
            std::cout << "Menu not found. Please select a valid menu." << std::endl;
        }
    }
};

int main() {
    RestaurantSystem restaurant;

    std::string menuChoice;
    std::cout << "Select a menu (Salad, Pasta, Steak): ";
    std::cin >> menuChoice;

    restaurant.setMenu(menuChoice);
    restaurant.addValue();

    return 0;
}