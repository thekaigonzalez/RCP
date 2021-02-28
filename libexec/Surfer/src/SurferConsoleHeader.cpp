//
// Created by seymo on 2/27/2021.
//

#include "SurferConsoleHeader.h"
#include <conio.h>
#include <vector>


void surfer::start_console() {
    std::cout << "Starting Surfer console..." << std::endl;
    surfer::load();
}

int main(int argc, char *argv[]) {
    surfer::start_console();
    try {
        std::string mode(argv[1]);
        if (mode == "--CIOS") {
            std::cout << "Starting console In CIOS mode..." << std::endl;
            std::cout << "Console CIOS Mode" << std::endl;
            std::cout << "> Debug Tools (debug)" << std::endl;
            std::cout << "> Fix Surfer Issues (issue)" << std::endl;
            std::cout << "> Contribute to CIOS Mode (pr)" << std::endl;
            std::cout << "> Learn about CIOS Mode (man)" << std::endl;
            std::cout << "---------------------------------------------" << std::endl;
            std::cout << "Choose one of the options above using their given ID to the right." << std::endl;
            std::cout << "CIOS Mode: Kai-Builder 2021" << std::endl;
            std::cout << "id/> ~$";
            std::string id;
            while (std::cin >> id) {
                if (id == "debug") {
                    std::cout << "Loading DEBUGTOOLS." << std::endl;
                    std::cout << "Done! Debug Tools loaded." << std::endl;
                    std::cout << "Debug Tool Methods:" << std::endl;
                    std::cout << "> Control Room" << std::endl;
                    std::cout << "> Code Execution" << std::endl;
                    std::cout << "> Compiler explorer" << std::endl;
                    std::cout << "---------------------------------------------" << std::endl;
                    std::cout << "Choose one of the options above using their given ID to the right." << std::endl;
                    std::cout << "CIOS Mode: Kai-Builder 2021" << std::endl;
                    std::cout << "> ~$";
                } else if (id == "issue") {
                    std::cout << "What are you having Issues with?" << std::endl;
                    std::cout << "> Surfer Being Slow" << std::endl;
                    std::cout << "> Manual (man) not working." << std::endl;
                    std::cout << "> Debug mode Says Unavailable" << std::endl;
                    std::cout << "---------------------------------------------" << std::endl;
                    std::cout << "Choose one of the options above using their given ID to the right." << std::endl;
                    std::cout << "CIOS Mode: Kai-Builder 2021" << std::endl;
                    std::cout << "> ~$";
                } else if (id == "man") {
                    std::cout
                            << "Loading Manual. . . (This may take time due to all of the Manual Assets needing to load, Must have At least .50 GB RAM Allocated)"
                            << std::endl;
                }
            }
        } else if (mode == "yate") {
            std::cout << "Loading Yet Another Text Editor (Inspired by GNU Nano). . .\nLoading Assets. . .\nLOADING TEXT ELEMS. . . .\n" << std::endl;
            system("cls");
            std::cout << "YATE 1.02.5\n---------------------------------------------------------------------\n[ENTER] new Line\n[CTRL+S] Save Buffer And Quit" << std::endl;
            yate_init();
        }
    }
    catch (std::logic_error &) {
        std::cout << "No Mode Given. Starting Surfer in Safe mode." << std::endl;
    }

}