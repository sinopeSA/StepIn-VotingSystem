#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "../inc/header.h"
#include "../unity/unity.h"
#include "../src/ELECTION.c"

void setUp() {}
void tearDown() {}

void extract_year_from_id(void)
{
    //char username[15] = "Admin", password[6] = "admiN";
    //char userid[20];
    TEST_ASSERT_EQUAL(1, isValid("2021BTCSE00025"));
}

void main()
{
    UNITY_BEGIN();

    RUN_TEST(extract_year_from_id);
    return UNITY_END();
}
