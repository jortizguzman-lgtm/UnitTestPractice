/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h> //google done this
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password) //A unit test, first arg is name of suite to test, every class made has test associatedd with same name, 2nd arg has the name what it is testing
{
	Password my_password; 
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual); //1st arg is expected outcome, 2nd arg is function result
}

TEST(PasswordTest, long_repeating_leading_password) //A unit test, first arg is name of suite to test, every class made has test associatedd with same name, 2nd arg has the name what it is testing
{
	Password my_password; 
	int actual = my_password.count_leading_characters("ZZZZZZZZZZhogyfyfogp");
	ASSERT_EQ(10, actual); //1st arg is expected outcome, 2nd arg is function result
}

TEST(PasswordTest, no_lead_password) //A unit test, first arg is name of suite to test, every class made has test associatedd with same name, 2nd arg has the name what it is testing
{
	Password my_password; 
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual); //1st arg is expected outcome, 2nd arg is function result
}