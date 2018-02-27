// Copyright 2015 Tixoncoin Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#pragma once

#include "work/Work.h"
#include "xdr/Tixoncoin-types.h"

namespace medida
{
class Meter;
}

namespace tixoncoin
{

class Bucket;

class VerifyBucketWork : public Work
{
    std::map<std::string, std::shared_ptr<Bucket>>& mBuckets;
    std::string mBucketFile;
    uint256 mHash;

    medida::Meter& mVerifyBucketSuccess;
    medida::Meter& mVerifyBucketFailure;

  public:
    VerifyBucketWork(Application& app, WorkParent& parent,
                     std::map<std::string, std::shared_ptr<Bucket>>& buckets,
                     std::string const& bucketFile, uint256 const& hash);
    ~VerifyBucketWork();
    void onRun() override;
    void onStart() override;
    Work::State onSuccess() override;
    void onFailureRetry() override;
    void onFailureRaise() override;
};
}
