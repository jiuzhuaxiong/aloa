///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2010 by Ralf Holly.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
///////////////////////////////////////////////////////////////////////////////

#ifndef MetricsTypes_h
#define MetricsTypes_h

#include "File.h"
#include "Issue.h"

#include <vector>
#include <map>
#include <string>

typedef std::map<std::string, File> FILE_MAP;
typedef std::map<int, Issue> ISSUE_MAP;
typedef std::vector<File> FILE_LIST;
typedef std::vector<Issue> ISSUE_LIST;

#endif
