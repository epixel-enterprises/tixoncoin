% tixoncoin-core(1)
% Tixoncoin Development Foundation
%

# NAME

tixoncoin-core - Core daemon for Tixoncoin payment network

# SYNOPSYS

tixoncoin-core [OPTIONS]

# DESCRIPTION

Tixoncoin is a decentralized, federated peer-to-peer network that allows
people to send payments in any asset anywhere in the world
instantaneously, and with minimal fee. `Tixoncoin-core` is the core
component of this network. `Tixoncoin-core` is a C++ implementation of
the Tixoncoin Consensus Protocol configured to construct a chain of
ledgers that are guaranteed to be in agreement across all the
participating nodes at all times.

## Configuration file

In most modes of operation, tixoncoin-core requires a configuration
file.  By default, it looks for a file called `tixoncoin-core.cfg` in
the current working directory, but this default can be changed by the
`--conf` command-line option.  The configuration file is in TOML
syntax.  The full set of supported directives can be found in
`%prefix%/share/doc/tixoncoin-core_example.cfg`.

%commands%

# EXAMPLES

See `%prefix%/share/doc/*.cfg` for some example tixoncoin-core
configuration files

# FILES

tixoncoin-core.cfg
:   Configuration file (in current working directory by default)

# SEE ALSO

<https://www.tixoncoin.org/developers/tixoncoin-core/software/admin.html>
:   tixoncoin-core administration guide

<https://www.tixoncoin.org>
:   Home page of Tixoncoin development foundation

# BUGS

Please report bugs using the github issue tracker:\
<https://github.com/tixoncoin/tixoncoin-core/issues>
