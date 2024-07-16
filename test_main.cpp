#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include <iostream>
#include "main.cpp"

TEST_CASE("Check that checkBrackets() works on array", "[main]") {
    //call checkBrackets on good file

    char* file = const_cast<char*>("test_data/DSVector_good.h");

    //check if output == 0
    CHECK(checkBrackets(file) == 0);

    //call checkBrackets on bad file
    file = const_cast<char*>("test_data/DSVector_bad.h");

    //check if output == 1;
    CHECK(checkBrackets(file) == 1);

    //call checkBrackets on difficult file
    file = const_cast<char*>("test_data/DSVector_difficult.h");

    //check if output == 1;
    CHECK(checkBrackets(file) == 1);
}

TEST_CASE("Check that checkBrackets() detects when file cannot be opened", "[main]") {
    //call checkBrackets on file which doesn't exist

    char* file = const_cast<char*>("test_data/DSVector_horrible.h");

    //check if output == 1
    CHECK(checkBrackets(file) == 1);
}
