#include "greet.h"
#include "pistache_headers.h"

void setSimpleHiGreeting(std::string* strPtr);

void greet(const Rest::Request& request, Http::ResponseWriter response)
{
    std::string greeting;
    setSimpleHiGreeting(&greeting);
    response.send(Http::Code::Ok, greeting);
}

void setSimpleHiGreeting(std::string* strPtr)
{
    if(strPtr) {
        *strPtr = "Hi! ^_^";
    }
}