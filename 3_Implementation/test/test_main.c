//#include "../inc/header.h"
#include "unity.h"
//#include "../src/panel.c"

void setUp() {}
void tearDown() {}

void extract_year_from_id(void)
{
    char userid[15] = "2021BTCSE00025";
    TEST_ASSERT_EQUAL(2021, extractYear(userid));
}

void main()
{
    UNITY_BEGIN();
    
    RUN_TEST(extract_year_from_id);
    
    return UNITY_END();
}
