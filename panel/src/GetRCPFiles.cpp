#include <iostream>
#include <fstream>
#include "../../libexec/Surfer/src/SurferConsoleHeader.h"
int main() {
    std::cout << "Panel 1.0 dist='RCP Debug Panel'" << std::endl;
    std::cout << "Running libYate (Yet Another Text Editor) Version 1.25.21" << std::endl;
    std::cout << "Running SurferTools 1.5" << std::endl;
    std::cout << "Running FLEX Engine Version 1.2.0" << std::endl;
    std::cout << "Running FLEX Fisher Version 1.2.3" << std::endl;
    std::cout << "Running RCP 1.0.5 Debug Tools." << std::endl;
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
    std::cout << "> check_for_rcp => bool" << std::endl;
    std::string action;
    while (true) {
        std::cout << "> ~ $";
        std::cin >> action;
        if (action == "tools") {
            std::cout << "Tools Installed on the Client as of " << __TIME__ << std::endl;
            std::cout << "SurferTools (stools -v)" << std::endl;
            std::cout << "libYate (lyate --v)" << std::endl;
            std::cout << "RCP 1.0.5v (rcp -c -v)" << std::endl;
            std::cout << "--------------------------------------------------------------" << std::endl;
        }
        else if (action == "yate") {
            std::cout << "Starting Yate (Yet Another Text Editor) Inspired by GNU's NANO." << std::endl;
            std::cout << "Starting YATE Initial Files. . ." << std::endl;
            std::cout << "Tex_INIT" << std::endl;
            std::cout << "Text_EDIT" << std::endl;
            std::cout << "RegistryEdit" << std::endl;
            std::cout << "KeyPush" << std::endl;
            std::cout << "Clearing Terminal For YATE INIT() : )" << std::endl;
            system("cls");
            std::cout << "# Yate Stands for Yet Another Text Editor" << std::endl;
            std::cout << "# Here, You can write data to files here." << std::endl;
            std::cout << "# Type :qa! To exit. (Inspired By VIM Text Editor)" << std::endl;
            std::cout << "# You can add As much Text as your Console can handle!" << std::endl;
            yate_init();
        }
        else if (action == "check_for_rcp") {
            std::ifstream rcp("../bin/RCP1.0.5v.exe");
            if (!rcp) {
                std::cout << "0" << std::endl;
            }
            else {
                std::cout << "1" << std::endl;
            }
        }
        else if (action == "lyate") {
            std::cout << "LibYate" << std::endl;
            std::cout << "> Yet" << std::endl;
            std::cout << "> Another" << std::endl;
            std::cout << "> Text" << std::endl;
            std::cout << "> Editor" << std::endl;
            std::cout << "> Framework!" << std::endl;
            std::cout << "Yate is a \"Hackable\" text editor that you can run inside of your console." << std::endl;
            std::cout << "libYate Is a framework for building extensions on top of Yate." << std::endl;
            std::cout << "Yate runs on the Surfer C++ Framework." << std::endl;
            std::cout << "Thanks for using LibYate!" << std::endl;
            std::cout << "---------------------------------------------------------------------------------------" << std::endl;
        }
        else if (action == "lib") {
            std::cout << "This project is open source. Meaning all libraries used can be downloaded by users to replicate & Inspire!" << std::endl;
            std::cout << "I'm Kai-Builder, And I believe in free software. I May not be the most 'Free Hippy' in my life, But i do believe that" << std::endl;
            std::cout << "free things are very great to have in mind. Most of the things I have purchased have been abilities to be able to contribute to the" << std::endl;
            std::cout << "FSF (Free Software Foundation). I Am the Developer of RCP, YATE, and surfer." << std::endl;
        }
        else {
            std::ifstream invalid_if_buffer_do(action + ".psc");
            if (!invalid_if_buffer_do) {
                std::cout << "Invalid Input, Quit? [Y/n]" << std::endl;
                std::cin >> action;
                if (action == "y")
                    return 10;
                else
                    continue;
            }
            else {
                std::string io;
                while (invalid_if_buffer_do >> io) {
                    std::cout << io << std::endl;
                }

            }
        }
    }
}