//
// Created by seymo on 2/21/2021.
//
#include "shared.hpp"
#include <iostream>
#include <algorithm>
#include <utility>
#include <functional>
#include <fstream>
#include <iomanip>
#include <GL/gl.h>

#include <ios>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <windows.h>
#include <winbase.h>


std::string placeholder;

void start_app(std::string &file) {

}
void removeSpaces(std::string& str)
{
    // To keep track of non-space character count
    int count = 0;

    // Traverse the given string. If current character
    // is not space, then place it at index 'count++'
    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i]; // here count is
    // incremented
    str[count] = '\0';
}
std::string open_brack;
std::string close_brack;
std::string command;
std::string param1;
std::string sender;
std::string args;

std::string initializer;
std::string funcname;
std::string isasync;
std::string statement;
std::string varname;
std::string varval;
std::string arg1;
std::string arg2;
char assignmentop = '=';

int main(int argc, char *argv[]) {
    std::ifstream infisle(argv[1]);
    while (infisle >> initializer) {
        if (initializer == "function") {
            getline(infisle, funcname, '(');
            getline(infisle, isasync, ')');

            std::remove_if(funcname.begin(), funcname.end(), isspace);

            if (funcname == "processs") {
                std::cout << "Process function exited with PROCESS CODE 4" << std::endl;
            } else {
                std::cout << "Started New Function Prototype: " << funcname << std::endl;
            }

        } else if (initializer == "var") {
            getline(infisle, varname, assignmentop);
            getline(infisle, varval, '\n');
            std::cout << "VARIABLE: " << varname << "\nVALUE: " << varval << std::endl;
        }
        else if (initializer == "RcpVariable") {
            getline(infisle, varname, assignmentop);
            getline(infisle, varval, '\n');
            std::cout << "SPEC_VARIABLE: " << varname << "\nVALUE: " << varval << std::endl;
        }
        else if (initializer == "bash") {
            infisle >> arg1;
            if (arg1 == "send") {
                getline(infisle, funcname, '(');
                getline(infisle, sender, ',');
                getline(infisle, args, ')');
                infisle >> param1;

                getline(infisle, open_brack, '{');
                getline(infisle, command, '}');
                std::cout << "Found 1 Event on Server CLIENT.rcp. Executing Command from asynchronous Data Sender: " + sender << std::endl;
                system(command.c_str());

            }

        }
        else if (initializer == "if") {
            getline(infisle, funcname, '(');
            getline(infisle, varname, '=');
            getline(infisle, placeholder, '=');
            getline(infisle, varval, ')');
            getline(infisle, open_brack, '{');
            getline(infisle, statement, '}');
            removeSpaces(varname);
            removeSpaces(varval);
            std::cout << "Tried Comparing " + varname + " To " << varval << " Got:" << std::endl;
            if (varname == varval)
                system(statement.c_str());
            else {
                std::cout << "WARNING: If statement always returns false." << std::endl;
            }
        }
        else if (initializer == "await") {
            getline(infisle, funcname, '(');
            getline(infisle, statement, ')');
            removeSpaces(funcname);
            if (funcname == "print") {

                std::cout << statement << std::endl;
            }
        }
    }

}