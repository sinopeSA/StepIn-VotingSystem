#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "string.h"
#include "unity.h"

void setUp() {}
void tearDown() {}
top starter, odr;
float FOOD_CODE = 0.0;
int qnty = 0;
void test_Clear_Screen(void)
{
    TEST_ASSERT_EQUAL(0, Clear_Screen());
}
// void test_console_color(void){
//   		TEST_ASSERT_EQUAL(0,console_color(26));
// }
void test_Add_Item(void)
{
    starter.start = NULL;
    TEST_ASSERT_EQUAL(0, Add_Item(&starter, 1.01, "Spring Rolls", 1, 100));
    TEST_ASSERT_EQUAL(0, Add_Item(&starter, 1.02, "Gobi Manchurian", 1, 100));
}
void test_Item_List(void)
{
    TEST_ASSERT_EQUAL(0, Item_List(&starter));
}
void test_Order_Item(void)
{
    FOOD_CODE = 1.01;
    qnty = 2;
    odr.start = NULL;
    TEST_ASSERT_EQUAL(0, Order_Item(&starter, &odr, FOOD_CODE, qnty));
}
void test_Previous_Order(void)
{
    TEST_ASSERT_EQUAL(0, Previous_Order(&odr));
}
void test_Total_Bill(void)
{
    TEST_ASSERT_EQUAL(0, Total_Bill(&odr));
}

void main()
{

    UNITY_BEGIN();

    RUN_TEST(test_Add_Item);
    //RUN_TEST(test_console_color);
    RUN_TEST(test_Item_List);
    RUN_TEST(test_Previous_Order);
    RUN_TEST(test_Total_Bill);
    RUN_TEST(test_Order_Item);
    RUN_TEST(test_Clear_Screen);

    return UNITY_END();
}
