#include <any>
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <optional>
#include <queue>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

import GMath;
import Soup.Test.Assert;

using namespace Soup::Test;

#include "Point2FTests.Run.h"
#include "Point2UTests.Run.h"
#include "Point3FTests.Run.h"
#include "Point4FTests.Run.h"
#include "RangeFTests.Run.h"
#include "RangeUTests.Run.h"
#include "SizeFTests.Run.h"
#include "SizeUTests.Run.h"

int main()
{
	std::cout << "Running Tests..." << std::endl;

	TestState state = { 0, 0 };

	state += RunPoint2FTests();
	state += RunPoint2UTests();
	state += RunPoint3FTests();
	state += RunPoint4FTests();
	state += RunRangeFTests();
	state += RunRangeUTests();
	state += RunSizeFTests();
	state += RunSizeUTests();

	std::cout << state.PassCount << " PASSED." << std::endl;
	std::cout << state.FailCount << " FAILED." << std::endl;

	if (state.FailCount > 0)
		return 1;
	else
		return 0;
}
