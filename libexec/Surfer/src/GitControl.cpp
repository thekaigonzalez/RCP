//
// Created by seymo on 2/27/2021.
//
#include "InputStreams.h"
#include "GetInputAs.hpp"
namespace git {
    // run git commit -m <commitmessage> without autopush.
    void commit(const std::string& commitmessage) {
        system(("git commit -m " + commitmessage).c_str());
    }
    // run git commit -m <commitmessage>
    // run git push
    void commit_with_autopush(const std::string& commitmessage) {
        system(("git commit -m " + commitmessage).c_str());
        system("git push");
    }
    // run git add <filebuf>
    void add(const std::string& filebuf) {

        system(("git add " + filebuf).c_str());
    }

}

int main(int argc, char* argv[]) {
    std::string arg1(argv[1]);
    if (arg1 == "-c") {
        std::string message(argv[2]);
        git::commit(message);
    }
    else if (arg1 == "-ac") {
        std::string message(argv[2]);
        git::commit_with_autopush(message);

    }
    else if (arg1 == "addfile") {
        std::string file(argv[2]);
        git::add(file);
    }

}