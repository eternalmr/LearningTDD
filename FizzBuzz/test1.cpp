
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "myfun.hpp"
#include <windows.h>

TEST_CASE("Test IsIrrelavant function", "[IsIrrelavant]") {
	SECTION("Simulation is not start, start_flag = 0, pause_flag = 0") {

		REQUIRE(DivideByThree(3) == true);
		REQUIRE(DivideByFive(5) == true);
		REQUIRE(DivideByThree(4) == false);
		REQUIRE(DivideByFive(6) == false);
	}
}