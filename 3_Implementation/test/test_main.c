/**
 * @file test_main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "../unity/unity.h"
#include "../unity/unity.c"
#include "../src/panel.c"

void setUp() {}
void tearDown() {}

void extract_year_from_id(void)
{
    char userId[15] = "2021BTCSE00025";
    TEST_ASSERT_EQUAL(2021, extractYear(userId));
}

void extract_rollno_from_id(void)
{
    char userId[15] = "2021BTCSE00025";
    TEST_ASSERT_EQUAL(25, extractRollNo(userId));
}

void admin_authenticate(void)
{
    char username[15] = "Admin", password[6] = "admiN";
    TEST_ASSERT_EQUAL(1, authenticateAdmin());
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(extract_year_from_id);
    RUN_TEST(extract_rollno_from_id);
    RUN_TEST(admin_authenticate);

    return UNITY_END();
}
