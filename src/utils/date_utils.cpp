#include "date_utils.h"

using namespace std::chrono;

system_clock::time_point getCurrentDateTime() {
    return system_clock::now();
}

