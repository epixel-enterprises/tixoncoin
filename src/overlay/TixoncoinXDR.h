#pragma once
#include "xdr/Tixoncoin-ledger-entries.h"
#include "xdr/Tixoncoin-ledger.h"
#include "xdr/Tixoncoin-overlay.h"
#include "xdr/Tixoncoin-transaction.h"
#include "xdr/Tixoncoin-types.h"

namespace tixoncoin
{

std::string xdr_printer(const PublicKey& pk);
}
