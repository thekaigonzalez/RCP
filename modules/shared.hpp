//
// Created by seymo on 2/21/2021.
//
#ifndef _GITPASS_
#define _GITPASS_
#include <functional>
#include <iostream>
#include <cstdio>
#include <conio.h>

std::string get_params() {
    return reinterpret_cast<const char *>(_argv);
}
void start_app();

/* Start Control Panel App */

void start_panel();


#endif // yeah


#ifndef COMMANDS_
#define COMMANDS_

enum command {
    LINK,
    DEF,
    INIT,
    STRUCT,
    L_POS
};

#endif