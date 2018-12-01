#include "catch.hpp"
#include "Calculator.h"

TEST_CASE("Subtractions are computed", "[sub]") {
    REQUIRE(subtraction(1.0, 1.0) == 0.0);
    REQUIRE(subtraction(-1.0, -1.0) == 0.0);
}