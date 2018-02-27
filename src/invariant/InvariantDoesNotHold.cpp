// Copyright 2017 Tixoncoin Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "InvariantDoesNotHold.h"

namespace tixoncoin
{

InvariantDoesNotHold::InvariantDoesNotHold(std::string const& msg)
    : std::runtime_error{msg}
{
}

InvariantDoesNotHold::~InvariantDoesNotHold() = default;
}
