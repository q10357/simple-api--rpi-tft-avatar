#include <chrono>
#include <iostream>
#include <string>
#include "greet.h"
#include "date_utils.h"

void simpleHiGreeting(std::string* strPtr);

void greet(const Rest::Request& request, Http::ResponseWriter response)
{
    std::string greeting;
    simpleHiGreeting(&greeting);
    //std::string s = std::format("{:%Y%m%d%H%M}", getCurrentDateTime());
    std::chrono::_V2::system_clock::time_point time = getCurrentDateTime();
    response.send(Http::Code::Ok, greeting);
}

void simpleHiGreeting(std::string* strPtr)
{
    if(strPtr) {
        *strPtr = "Hi! ^_^";
    }
}

void daytimeGreeting()
{

}