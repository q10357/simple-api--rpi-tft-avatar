#include "pistache_headers.h"
#include "greet.h"

#include "rapidjson/document.h"

int main(int argc, char* argv[]) 
{
    using namespace Rest;

    Router router;
    Port port(3000);
    Address addr(Ipv4::any(), port);
    std::shared_ptr<Http::Endpoint> endpoint = std::make_shared<Http::Endpoint>(addr);
    auto opts = Http::Endpoint::options().threads(1);
    endpoint->init(opts);

    /* Routes */
    Routes::Get(router, "/greet", Routes::bind(&greet)); 
    
    endpoint->setHandler(router.handler());
    endpoint->serve(); // start server

}
