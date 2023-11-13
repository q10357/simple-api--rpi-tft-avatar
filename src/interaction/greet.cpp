#include "greet.h"

void simpleHiGreeting(std::string* strPtr);


void greet(const Pistache::Rest::Request& request, Pistache::Http::ResponseWriter response)
{
    std::string greeting;
    simpleHiGreeting(&greeting);
    response.send(Pistache::Http::Code::Ok, greeting);
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