#include "catch.hpp"
#include "Calculator.h"

TEST_CASE( "Additions are computed", "[add]") {
    REQUIRE( addition(1.0, 1.0) == 2);
}