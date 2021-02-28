//
// Created by seymo on 2/27/2021.
//
#include <iostream>
#include <fstream>
#include <conio.h>
#include <vector>

#define CTRL(c) ((c) & 037)

// Include Input Streams for optimized Input
#include "InputStreams.h"

#ifndef SURFER_SURFERCONSOLEHEADER_H
#define SURFER_SURFERCONSOLEHEADER_H

namespace surfer {
    /* Start A Surfer Interface */
    void start_console();

    void load() {
        std::ifstream loadlog(".loadlog");
        if (!loadlog) {
            std::cout << "FAILED TO FIND .loadlog File. Creating one from scratch." << std::endl;
        }
    }
}
void yate_init() {
    system("color 3");
    std::vector<std::string> FileBuffer{};
    std::string foob;
    int index = 0;
    getline(std::cin, foob);
    while (foob != ":qa!") {
        FileBuffer.push_back("\n" + foob);
        getline(std::cin, foob);
    }
    std::cout << "Save Buffer as?" << std::endl;
    std::string bufname;
    std::cin >> bufname;
    for (int i = 0; i < FileBuffer.size(); ++i) {
        std::ofstream buffers(bufname, std::ios::app);
        buffers << FileBuffer[i];
        buffers.close();
    }

}

#endif //SURFER_SURFERCONSOLEHEADER_H
