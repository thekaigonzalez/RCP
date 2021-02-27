#include <iostream>
#include <fstream>
#include "../../libexec/Surfer/src/SurferConsoleHeader.h"
int main() {
    std::cout << "Panel 1.0 dist='RCP Debug Panel'" << std::endl;
    std::cout << "Running libYate (Yet Another Text Editor) Version 1.25.21" << std::endl;
    std::cout << "Running SurferTools 1.5" << std::endl;
    std::cout << "Running FLEX Engine Version 1.2.0" << std::endl;
    std::cout << "Running FLEX Fisher Version 1.2.3" << std::endl;
    std::cout << "Running RCP 1.0.4 Debug Tools." << std::endl;
    std::cout << "> tools" << std::endl;
    std::cout << "> yate" << std::endl;
    std::cout << "> lib" << std::endl;
    std::cout << "> dev" << std::endl;
    std::cout << "> env" << std::endl;
    std::cout << "> rcpdl" << std::endl;
    std::cout << "> stools" << std::endl;
    std::cout << "> lyate" << std::endl;
    std::cout << "> flex" << std::endl;
    std::cout << "> fisher" << std::endl;
    std::string action;
    while (std::cin >> action) {
        if (action == "tools") {
            std::cout << "Tools Installed on the Client as of " << __TIME__ << std::endl;
            std::cout << "SurferTools (stools -v)" << std::endl;
            std::cout << "libYate (lyate --v)" << std::endl;
            std::cout << "RCP 1.0.4v (rcp -c -v)" << std::endl;
            std::cout << "--------------------------------------------------------------" << std::endl;
        } else if (action == "yate") {
            yate_init();
        }
    }
}