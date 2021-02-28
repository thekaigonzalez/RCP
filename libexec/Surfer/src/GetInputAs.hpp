#include <iostream>



int getInputAs(const std::string& type) {
    std::string input;
    std::cin >> input;
    if (type == "INTEGER" || type == "INT") {
        return std::stoi(input);
    }
    else {
        return 0;
    }
}
