//
// Copyright (c) 2019-2024, Manticore Software LTD (https://manticoresearch.com)
// All rights reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License. You should have
// received a copy of the GPL license along with this program; if you
// did not, you can find it at http://www.gnu.org
//

#pragma once

#include "std/string.h"
#include "searchdaemon.h"

// command to all remote nodes at cluster to get actual nodes list
StrVec_t GetNodeListFromRemotes ( const ClusterDesc_t& tDesc );



