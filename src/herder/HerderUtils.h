#pragma once

// Copyright 2017 Tixoncoin Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "xdr/Tixoncoin-types.h"
#include <vector>

namespace tixoncoin
{

struct SCPEnvelope;
struct SCPStatement;
struct TixoncoinValue;

std::vector<Hash> getTxSetHashes(SCPEnvelope const& envelope);
std::vector<TixoncoinValue> getTixoncoinValues(SCPStatement const& envelope);
}
