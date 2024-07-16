#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

// add includes
#include "DSList.h"

TEST_CASE("Check that DSList copy constructor works with two lists that have elements", "[DSList]")
{
    //check copy constructor functionality

    //create two DSLists
    DSList<int> list1;
    DSList<int> list2;

    //populate the lists
    list1.push_back(1);
    list1.push_front(2);
    list1.push_front(3);

    list2.push_back(3);
    list2.push_front(2);
    list2.push_front(1);

    //copy one list to another
    list1 = DSList<int>(list2);

    //check if lists equal each other
    CHECK(list1 == list2); //expected true
}

TEST_CASE("Check that DSList copy constructor works with one list with elements and one without elements", "[DSList]")
{
    //check copy constructor functionality
    
    //create two DSLists, one with elements, one without elements
    DSList<int> list3;
    DSList<int> list4;

    //populate one list
    list4.push_back(1);
    list4.push_front(2);
    list4.push_front(3);

    //copy one list to another
    list3 = DSList<int>(list4);

    //check if lists equal each other
    CHECK(list3 == list4); //expected true
}

TEST_CASE("Check that DSList assignment operator works with two lists that have elements", "[DSList]")
{
    //check assignment operator functionality

    //create two DSlists
    DSList<int> list1;
    DSList<int> list2;

    //populate the lists
    list1.push_back(1);
    list1.push_front(2);
    list1.push_front(3);

    list2.push_back(3);
    list2.push_front(2);
    list2.push_front(1);

    //assign one list to another
    list1 = list2;

    //check if lists equal each other
    CHECK(list1 == list2); //expected true
}

TEST_CASE("Check that DSList assignment operator works with one list with elements and one without elements", "[DSList]")
{
    //check assignment operator functionality

    //create two DSlists, one with elements and one without elements
    DSList<int> list3;
    DSList<int> list4;

    //populate one list
    list4.push_back(1);
    list4.push_front(2);
    list4.push_front(3);

    //assign one list to another
    list3 = list4;

    //check if lists equal each other
    CHECK(list3 == list4); //expected true
}

// you can run the test using Run CTest in the task bar or by running the tests executable. 