// Include 'input buffering'

#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

class GetInput {

    static std::string input();

public:
    static std::string input_extract_once();
};


/*
 * GetInput::input()
 *
 * Gets Input for a given line by extracting & reallocating bytes to Stdout.
 * (AKA: Optimized <cout>)
 */
std::string GetInput::input() {
    char input;
    std::string stdoutf;
    while (std::cin >> input)
        stdoutf.push_back(input);
    return stdoutf;
}

std::string GetInput::input_extract_once() {
    std::string input;
    std::cin >> input;
    return input;
}
