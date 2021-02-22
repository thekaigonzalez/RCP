//
// Created by seymo on 2/21/2021.
//
#define el(cnd) else if (cnd)
#include "shared.hpp"
#include "../lib/ConfigurablePasswordSystem/mixin.h"
/* Start RCPScript Instance */
void start_app()  {
    PasswordSystem check;
    std::ofstream inf("rcp.config");
    inf << "# This File is for passwords Only.\n# These passwords are meant to be used as a temporary way to store user information.\n# These are comments.\n# Foo -> bar\ntestpassword";
    inf.close();
    welcome:
    std::cout << "Welcome To RCPScript Version 1.0!" << std::endl;
    std::cout << "To get started, Type help. For a list of basic commands, Try commands!" << std::endl;
    std::string keyword;
    while (std::cin >> keyword) {


        if (keyword == "goto_beginning") {
            goto welcome;
        } el (keyword == "install") {
            std::string module;
            std::cin >> module;
            std::ifstream infs("rcp.config");
            std::string pass;
            std::string passw;
            std::ofstream commentcache(".COMMENTCACHE", std::ios::app);
            commentcache << "# Comment Cache Generated By RCP Comment generator.\n";
            while (infs >> pass) {

                if (pass == "#") {
                    char comment[300];
                    infs.getline(comment, 300);

                    commentcache << "# Comment:" << comment << "\n";
                }
                else
                    passw = pass;
            }

            std::cout << "Enter Password For User: ";
            if (check.check_if_password_is(passw, '+')) {

                std::cout << "Generating " + module + ".any.whl . . " << std::endl;
                std::ofstream wheel(module + ".any.whl");
                wheel << "# Generated by 'RCP WheelFiles' Generator\n# Copyright Kai-Builder 2015-2021\n\nlnk='https://www.github.com/Kai-Builder/RCP.git'\ncommercial='base.com'\n\nmodule='" << module << "'\nbasic='modulef'\ntype='util'\nessential_link='https://www.github.com/Kai-Builder/" << module << "'\ncrack='https://www.github.com/" << module << "\n# EOM";
                Sleep(1000);
                std::cout << "This Download Will Install now." << std::endl;
            }
            else {
                std::cout << "Wrong Password for bash." << std::endl;
            }
        }
    }
}

int main() {
    start_app();

}