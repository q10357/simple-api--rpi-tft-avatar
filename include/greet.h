#ifndef GREET_H
#define GREET_H

#pragma once

#include "pistache_headers.h"

using namespace Pistache; 

void greet(const Rest::Request& request, Http::ResponseWriter response);

#endif