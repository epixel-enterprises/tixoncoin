// Copyright 2015 Tixoncoin Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "historywork/ResolveSnapshotWork.h"
#include "history/StateSnapshot.h"
#include "ledger/LedgerManager.h"
#include "main/Application.h"

namespace tixoncoin
{

ResolveSnapshotWork::ResolveSnapshotWork(
    Application& app, WorkParent& parent,
    std::shared_ptr<StateSnapshot> snapshot)
    : Work(app, parent, "prepare-snapshot", Work::RETRY_FOREVER)
    , mSnapshot(snapshot)
{
}

ResolveSnapshotWork::~ResolveSnapshotWork()
{
    clearChildren();
}

void
ResolveSnapshotWork::onRun()
{
    mSnapshot->mLocalState.resolveAnyReadyFutures();
    mSnapshot->makeLive();
    if (mApp.getLedgerManager().getState() == LedgerManager::LM_SYNCED_STATE &&
        mSnapshot->mLocalState.futuresAllResolved())
    {
        scheduleSuccess();
    }
    else
    {
        scheduleFailure();
    }
}
}
