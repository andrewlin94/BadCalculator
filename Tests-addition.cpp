#include "catch.hpp"
#include "Calculator.h"

// Something is wrong with computing more than 1 decimals. have to do with precision.
TEST_CASE("Additions are computed", "[add]") {
    REQUIRE(addition(1.0, 1.0) == 2.0);
    REQUIRE(addition(-1.0, -1.0) == -2.0);
    REQUIRE(addition(123.0, 678.0) == 802.0);
    REQUIRE(addition(-908.0, -543.0) == -1451.0);
}