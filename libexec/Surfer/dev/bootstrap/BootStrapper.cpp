// Create Engine Bindings for Surfer

#include <string>
#include <iostream>
#define surfer_string std::string
namespace Surfer {
    namespace SurferEngine {
        typedef float surfer_float;
        typedef int surfer_int;
        typedef void surfer_void;

    }
    double pi = 3.14;
    double basic_calculation = 1.0 * 3.1;

    SurferEngine::surfer_float get_pi() {
        return pi;
    }
    surfer_string get_input_extraction(std::string& s) {
        std::cin >> s;
        return s;
    }
}