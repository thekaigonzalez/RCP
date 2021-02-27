//
// Created by seymo on 2/27/2021.
//
#include <iostream>
#include <fstream>
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
    std::string FileBuffer;
    char buf = _getch();
    while (buf != CTRL('s')) {
        std::cout << buf;
        if (buf == '\r') {
            std::cout << "\n";
        }
        FileBuffer.push_back(buf);
        buf = _getch();
    }
    std::cout << "Save Buffer as?" << std::endl;
    std::string bufname;
    std::cin >> bufname;

    std::ofstream buffers(bufname);
    buffers << FileBuffer;
    buffers.close();
}

#endif //SURFER_SURFERCONSOLEHEADER_H
