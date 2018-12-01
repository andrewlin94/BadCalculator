#include "catch.hpp"
#include "Calculator.h"

TEST_CASE("Subtractions are computed", "[sub]") {
    REQUIRE(subtraction(1.0, 1.0) == 0.0);
    REQUIRE(subtraction(-1.0, -1.0) == 0.0);
    REQUIRE(subtraction(-1.2, 4.7) == -5.9);
    REQUIRE(subtraction(3.2, -9.3) == 12.5);
}