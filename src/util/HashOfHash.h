#pragma once
#include <xdr/Tixoncoin-types.h>

namespace std
{
template <> struct hash<tixoncoin::uint256>
{
    size_t operator()(tixoncoin::uint256 const& x) const noexcept;
};
}
