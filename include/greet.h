#ifndef GREET_H
#define GREET_H

#pragma once

#include "pistache_headers.h"

void greet(const Pistache::Rest::Request& request, Pistache::Http::ResponseWriter response);

#endif