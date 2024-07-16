#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "DSStack_list.h"
#include <iostream>

TEST_CASE("Check that push() and top() works", "[DSList]") {
    //create a list
    DSStack_list<int> testList;

    //push a value
    testList.push(1);

    //check if first value of list is the pushed value
    CHECK(testList.top() == 1); //expected true
}

TEST_CASE("Check that push() and top() works for multiple elements", "[DSList]") {
    //create a list
    DSStack_list<int> testList;

    //push values
    testList.push(1);
    testList.push(2);

    //check if values are in correct positions
    CHECK(testList.top() == 2); //expected true
}

TEST_CASE("Check that pop() and empty() works", "[DSList]") {
    //create a list
    DSStack_list<int> list;

    //push a value
    list.push(1);

    //pop a value
    list.pop();

    //check if list is empty
    CHECK(list.empty()); //expected true
}

TEST_CASE("Check that pop() and empty() works for multiple elements", "[DSList]") {
    //create a list
    DSStack_list<int> list;

    //push values
    list.push(1);
    list.push(2);

    //pop values
    list.pop();
    list.pop();

    //check if list is empty
    CHECK(list.empty()); //expected true
}

TEST_CASE("Check that size() works for one element", "[DSList]") {
    //create a list
    DSStack_list<int> list;

    //push a value
    list.push(1);

    //check if size equals to 1
    CHECK(list.size() == 1); //expected true
}

TEST_CASE("Check that size() works for multiple elements", "[DSList]") {
    //create a list
    DSStack_list<int> list;

    //push 3 values
    list.push(1);
    list.push(2);
    list.push(3);

    //check if size equals to 3
    CHECK(list.size() == 3); //expected true
}