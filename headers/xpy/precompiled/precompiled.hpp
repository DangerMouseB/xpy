#pragma once

#if (_WIN32_WINNT < 0x0500)		// needed to make GetConsoleWindow work in VC8 see documentation for GetConsoleWindow in MSDN
#undef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif


//xlw
#include "xlw/xlw.h"

// python
#include <pyinex/utils/python_wrapper.hpp>

// boost
#include <boost/shared_ptr.hpp>
#include <boost/fusion/container/map.hpp>
#include <boost/numeric/ublas/vector.hpp>

// stl
#include <algorithm>
#include <cctype> 
#include <cmath>
#include <exception>
#include <iostream>
#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <sstream>
#include <vector>

// windows & c
#include <FCNTL.H>
#include <psapi.h>
#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <windows.h>

// utils
#include <pyinex/utils/utils.hpp>


