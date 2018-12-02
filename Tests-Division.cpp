#include "catch.hpp"
#include "Calculator.h"

TEST_CASE("Divisions are computed", "[div]") {
    SECTION("Divisions with multiplication table") {
        REQUIRE(division(81.0, 9.0) == 9.0);

        REQUIRE(division(72.0, 9.0) == 8.0);
        REQUIRE(division(64.0, 8.0) == 8.0);

        REQUIRE(division(63.0, 9.0) == 7.0);
        REQUIRE(division(56.0, 8.0) == 7.0);
        REQUIRE(division(49.0, 7.0) == 7.0);

        REQUIRE(division(54.0, 9.0) == 6.0);
        REQUIRE(division(48.0, 8.0) == 6.0);
        REQUIRE(division(42.0, 7.0) == 6.0);
        REQUIRE(division(36.0, 6.0) == 6.0);

        REQUIRE(division(45.0, 9.0) == 5.0);
        REQUIRE(division(40.0, 8.0) == 5.0);
        REQUIRE(division(35.0, 7.0) == 5.0);
        REQUIRE(division(30.0, 6.0) == 5.0);
        REQUIRE(division(25.0, 5.0) == 5.0);

        REQUIRE(division(36.0, 9.0) == 4.0);
        REQUIRE(division(32.0, 8.0) == 4.0);
        REQUIRE(division(28.0, 7.0) == 4.0);
        REQUIRE(division(24.0, 6.0) == 4.0);
        REQUIRE(division(20.0, 5.0) == 4.0);
        REQUIRE(division(16.0, 4.0) == 4.0);

        REQUIRE(division(27.0, 9.0) == 3.0);
        REQUIRE(division(24.0, 8.0) == 3.0);
        REQUIRE(division(21.0, 7.0) == 3.0);
        REQUIRE(division(18.0, 6.0) == 3.0);
        REQUIRE(division(15.0, 5.0) == 3.0);
        REQUIRE(division(12.0, 4.0) == 3.0);
        REQUIRE(division(9.0, 3.0) == 3.0);

        REQUIRE(division(18.0, 9.0) == 2.0);
        REQUIRE(division(16.0, 8.0) == 2.0);
        REQUIRE(division(14.0, 7.0) == 2.0);
        REQUIRE(division(12.0, 6.0) == 2.0);
        REQUIRE(division(10.0, 5.0) == 2.0);
        REQUIRE(division(8.0, 4.0) == 2.0);
        REQUIRE(division(6.0, 3.0) == 2.0);
        REQUIRE(division(4.0, 2.0) == 2.0);

        REQUIRE(division(9.0, 9.0) == 1.0);
        REQUIRE(division(8.0, 8.0) == 1.0);
        REQUIRE(division(7.0, 7.0) == 1.0);
        REQUIRE(division(6.0, 6.0) == 1.0);
        REQUIRE(division(5.0, 5.0) == 1.0);
        REQUIRE(division(4.0, 4.0) == 1.0);
        REQUIRE(division(3.0, 3.0) == 1.0);
        REQUIRE(division(2.0, 2.0) == 1.0);
        REQUIRE(division(1.0, 1.0) == 1.0);

    }

    SECTION("Division tests with negative numbers") {
        REQUIRE(division(-51936.0, 12.0) == -4328.0);
        REQUIRE(division(531136.0, -43.0) == -12352.0);
        REQUIRE(division(-100000.0, -10000.0) == 10.0);
    }

    SECTION("Division tests with decimal numbers") {
        REQUIRE(division(3.0, 2.0) == 1.5);
        REQUIRE(division(9543.0, 0.0) == 0.0);
    }
}