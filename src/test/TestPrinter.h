#pragma once

// Copyright 2017 Tixoncoin Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "catchup/CatchupWork.h"
#include "history/HistoryTestsUtils.h"
#include "lib/catch.hpp"
#include "xdr/Tixoncoin-transaction.h"
#include "xdrpp/printer.h"

namespace tixoncoin
{

struct OfferState;
}

namespace Catch
{

template <> std::string toString(tixoncoin::ClaimOfferAtom const& coa);

template <> std::string toString(tixoncoin::Hash const& tr);

template <> std::string toString(tixoncoin::OfferEntry const& oe);

template <> std::string toString(tixoncoin::OfferState const& os);

template <> std::string toString(tixoncoin::TransactionResult const& tr);

template <> std::string toString(tixoncoin::CatchupRange const& cr);

template <>
std::string toString(tixoncoin::historytestutils::CatchupPerformedWork const& cm);
}
