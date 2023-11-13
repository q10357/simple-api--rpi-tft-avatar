#include <pistache/endpoint.h>
#include <pistache/router.h>
#include <pistache/http.h>
#include "greet.h"

void configureRouter(Pistache::Rest::Router& router) {
    Pistache::Rest::Routes::Get(router, "/greet", Pistache::Rest::Routes::bind(&greet));
    // Add more route configurations as needed
}

int main() {
    const int portNumber = 3000;

    Pistache::Address addr(Pistache::Ipv4::any(), Pistache::Port(portNumber));
    auto endpoint = std::make_shared<Pistache::Http::Endpoint>(addr);

    auto opts = Pistache::Http::Endpoint::options().threads(1);
    endpoint->init(opts);

    Pistache::Rest::Router router;
    configureRouter(router);

    endpoint->setHandler(router.handler());
    endpoint->serve();

    return 0;
}