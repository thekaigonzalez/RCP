#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Surfer 1.0" << std::endl;
    try {
        std::string arg1(argv[1]);

        if (arg1 == "-v") {
            std::cout << "Running Surfer version 1.0" << std::endl;
        } else if (arg1 == "-data") {
            std::cout << "Last Execution: " << __TIME__ << std::endl;
        }
    }
    catch (std::logic_error&) {
        std::cout
                << "surfer.exe -v\nsurfer.exe -data\nsurfer.exe -c\nsurfer.exe -sh\nsurfer.exe --txt\nsurfer install"
                << std::endl;
    }
}
