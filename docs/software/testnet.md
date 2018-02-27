---
title: Testnet
---

## Starting a test network with 1 node

First, make sure you have copied the example config to your current working directory.
From the TLD of the repo, run
`cp docs/tixoncoin_core_standalone.cfg ./bin/tixoncoin-core.cfg`

By default tixoncoin-core waits to hear from the network for a ledger close before
it starts emitting its own SCP messages. This works fine in the common case but
when you want to start your own network you need to start SCP manually.
this is done by:
```sh
$ tixoncoin-core --forcescp
```
That will set state in the DB and then exit. The next time you start
tixoncoin-core SCP will start immediately rather than waiting.


## Adding multiple nodes

If you want to add additional nodes to your test network, simply change the .cfg 
appropriately. You will need to fill out the `KNOWN_PEERS` section. You should set `RUN_STANDALONE=false`. Generate a seed for each node you want to add using 

`$ tixoncoin-core --genseed`

. See the [admin guide](./admin.md) for more info.


For each server in the cluster you need to do:
```sh
$ tixoncoin-core --newdb --forcescp
$ tixoncoin-core
```

This will start a new ledger on each server and cause them to move ahead with
SCP. They will still wait to hear from a quorum of nodes before closing a ledger.

## Bringing a test network back up
If you need to restart the network after bringing it down. Do the following on a quorum of the nodes that all have the same last ledger:
```sh
$ tixoncoin-core --forcescp
$ tixoncoin-core
```

This will start from the last saved state of each server. After these servers sync you can start the other nodes in the cluster normally and they will catch up to the network.

