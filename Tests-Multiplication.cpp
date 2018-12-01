#include "catch.hpp"
#include "Calculator.h"

TEST_CASE("Multiplications are computed", "[multi]") {
  
    SECTION("Multiplication Table") {
        REQUIRE(multiplication(1.0, 1.0) == 1.0);
        REQUIRE(multiplication(1.0, 2.0) == 2.0);
        REQUIRE(multiplication(1.0, 3.0) == 3.0);
        REQUIRE(multiplication(1.0, 4.0) == 4.0);
        REQUIRE(multiplication(1.0, 5.0) == 5.0);
        REQUIRE(multiplication(1.0, 6.0) == 6.0);
        REQUIRE(multiplication(1.0, 7.0) == 7.0);
        REQUIRE(multiplication(1.0, 8.0) == 8.0);
        REQUIRE(multiplication(1.0, 9.0) == 9.0);

        REQUIRE(multiplication(2.0, 2.0) == 4.0);
        REQUIRE(multiplication(2.0, 3.0) == 6.0);
        REQUIRE(multiplication(2.0, 4.0) == 8.0);
        REQUIRE(multiplication(2.0, 5.0) == 10.0);
        REQUIRE(multiplication(2.0, 6.0) == 12.0);
        REQUIRE(multiplication(2.0, 7.0) == 14.0);
        REQUIRE(multiplication(2.0, 8.0) == 16.0);
        REQUIRE(multiplication(2.0, 9.0) == 18.0);

        REQUIRE(multiplication(3.0, 3.0) == 9.0);
        REQUIRE(multiplication(3.0, 4.0) == 12.0);
        REQUIRE(multiplication(3.0, 5.0) == 15.0);
        REQUIRE(multiplication(3.0, 6.0) == 18.0);
        REQUIRE(multiplication(3.0, 7.0) == 21.0);
        REQUIRE(multiplication(3.0, 8.0) == 24.0);
        REQUIRE(multiplication(3.0, 9.0) == 27.0);

        REQUIRE(multiplication(4.0, 4.0) == 16.0);
        REQUIRE(multiplication(4.0, 5.0) == 20.0);
        REQUIRE(multiplication(4.0, 6.0) == 24.0);
        REQUIRE(multiplication(4.0, 7.0) == 28.0);
        REQUIRE(multiplication(4.0, 8.0) == 32.0);
        REQUIRE(multiplication(4.0, 9.0) == 36.0);

        REQUIRE(multiplication(5.0, 5.0) == 25.0);
        REQUIRE(multiplication(5.0, 6.0) == 30.0);
        REQUIRE(multiplication(5.0, 7.0) == 35.0);
        REQUIRE(multiplication(5.0, 8.0) == 40.0);
        REQUIRE(multiplication(5.0, 9.0) == 45.0);

        REQUIRE(multiplication(6.0, 6.0) == 36.0);
        REQUIRE(multiplication(6.0, 7.0) == 42.0);
        REQUIRE(multiplication(6.0, 8.0) == 48.0);
        REQUIRE(multiplication(6.0, 9.0) == 54.0);

        REQUIRE(multiplication(7.0, 7.0) == 49.0);
        REQUIRE(multiplication(7.0, 8.0) == 56.0);
        REQUIRE(multiplication(7.0, 9.0) == 63.0);

        REQUIRE(multiplication(8.0, 8.0) == 64.0);
        REQUIRE(multiplication(8.0, 9.0) == 72.0);

        REQUIRE(multiplication(9.0, 9.0) == 81.0);
    }

    SECTION("Multiplication tests with negative numbers") {
        REQUIRE(multiplication(-1.0, -1.0) == 1.0 );
        REQUIRE(multiplication(-2.9, 101) == -292.9 );
        REQUIRE(multiplication(12321, -122.5) == -1509322.5);
    }
}