// Copyright 2015 Tixoncoin Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#pragma once

#include "historywork/RunCommandWork.h"

namespace tixoncoin
{

class GunzipFileWork : public RunCommandWork
{
    std::string mFilenameGz;
    bool mKeepExisting;
    void getCommand(std::string& cmdLine, std::string& outFile) override;

  public:
    GunzipFileWork(Application& app, WorkParent& parent,
                   std::string const& filenameGz, bool keepExisting = false,
                   size_t maxRetries = Work::RETRY_NEVER);
    ~GunzipFileWork();
    void onReset() override;
};
}
