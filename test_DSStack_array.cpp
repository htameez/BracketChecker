#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

// add includes
#include "DSStack_array.h"

TEST_CASE("Check that DSStack_array push() works", "[DSStack_array]")
{
    //create an array
    DSStack_array<int> testArray;

    //push a value
    testArray.push(1);

    //check if first value of array is the pushed value
    CHECK(testArray[0] == 1); //expected true
}

TEST_CASE("Check that DSStack_array push() works with multiple elements", "[DSStack_array]")
{
    //create an array
    DSStack_array<int> testArray;

    //push values
    testArray.push(1);
    testArray.push(2);
    testArray.push(3);

    //check if values are in correct position
    CHECK(testArray[0] == 1); //expected true
    CHECK(testArray[1] == 2); //expected true
    CHECK(testArray[2] == 3); //expected true
}

TEST_CASE("Check that DSStack_array pop() works", "[DSStack_array]")
{
    //create an array
    DSStack_array<int> testArray;

    //push a value
    testArray.push(1);

    //check if first value of array is the pushed value
    CHECK(testArray[0] == 1); //expected true

    //pop a value
    testArray.pop();

    //check if array is empty
    CHECK(testArray.empty()); //expected true
}

TEST_CASE("Check that DSStack_array pop() works with multiple elements", "[DSStack_array]")
{
    
}

TEST_CASE("Check that copy constructor of DSStack_array works", "[DSStack_array]")
{
    //testing a copy of an array with elements into an array with no elements

    //create two DSStack arrays
    DSStack_array<int> testArray1;
    DSStack_array<int> testArray2;

    //push values to one array
    testArray2.push(3);
    testArray2.push(2);
    testArray2.push(1);

    //copy that array into other array
    testArray1 = DSStack_array<int>(testArray2);

    //check if testArray1 == testArray 2
    CHECK(testArray1 == testArray2); //expected true

    //testing a copy of an array with elements into an array with elements
    
    //take out values in testArray1
    testArray1.pop();
    testArray1.pop();
    testArray1.pop();

    if(testArray1.empty()) {
        testArray1.push(1);
        testArray1.push(2);
        testArray1.push(3);
    }

    //copy one array to the other
    testArray1 = DSStack_array<int>(testArray2);

    CHECK(testArray1 == testArray2); //expected true

}

TEST_CASE("Check that assignment operator of DSStack_array works", "[DSStack_array]")
{
    //testing with an empty array and an array with values


    //create two arrays
    DSStack_array<int> testArray1;
    DSStack_array<int> testArray2;

    //push values one array
    testArray2.push(1);
    testArray2.push(2);
    testArray2.push(3);

    //assign array with values to empty array
    testArray1 = testArray2;

    //check if arrays equal each other
    CHECK(testArray1 == testArray2); //expected true


    //testing with an empty array and an array with values


    //take values out of one array
    testArray1.pop();
    testArray1.pop();
    testArray1.pop();

    //push values onto that array
    testArray1.push(4);
    testArray1.push(5);
    testArray1.push(6);

    //assign one array to other array
    testArray1 = testArray2;

    //check if arrays equal each other
    CHECK(testArray1 == testArray2); //expected true

}

// you can run the test using Run CTest in the task bar or by running the tests executable. 