#include "catch.hpp"
#include "Calculator.h"

TEST_CASE("Subtractions are computed", "[sub]") {
    REQUIRE(subtraction(1.0, 1.0) == 0.0);
    REQUIRE(subtraction(-1.0, -1.0) == 0.0);
    REQUIRE(subtraction(-1.0, 4.0) == -5.0);
    REQUIRE(subtraction(3.0, -9.0) == 12.0);
}