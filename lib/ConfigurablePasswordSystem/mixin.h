//
// Created by seymo on 2/21/2021.
//
#include <tchar.h>
#include <iostream>
#include <utility>
#include <vector>
#include <windows.h>
#include <Lmcons.h>
#include <winbase.h>
#include <conio.h>
#include <string> /* std::string, std::to_string */
#include <fstream> /* Fstream::app, Fstream::binary */
#include <cstdio> /* printf, scanf, puts, NULL, nullptr */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
/* Allow Passwords to be shared */
#ifndef CONFIGURABLEPASSWORDSYSTEM_MIXIN_H
#define CONFIGURABLEPASSWORDSYSTEM_MIXIN_H



class System {
public:
    std::string name;
    std::string target;

    virtual std::string return_given_password(char indicator) {
        char c = _getch( );
        std::string password;
        while (c != '\r') {
            password.push_back(c);
            std::cout << indicator;
            c = _getch();
        }
        return password;
    }
    virtual bool check_if_password_is(std::string password, char indicator) {
        char c = _getch( );
        std::string passf;
        while (c != '\r') {
            passf.push_back(c);
            std::cout << indicator;
            c = _getch();
        }
        std::cout << "\n";
        if (passf == password) {

            return true;
        }
        else
            return false;
    }
};

class PasswordSystem : public System {

};

#endif //CONFIGURABLEPASSWORDSYSTEM_MIXIN_H
