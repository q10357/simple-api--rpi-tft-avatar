#ifndef DATE_UTILS_H
#define DATE_UTILS_H

#pragma once

#include <iostream>
#include <chrono>

std::chrono::system_clock::time_point getCurrentDateTime() {
    return std::chrono::system_clock::now();
}

#endif