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

TEST(PasswordTest, new_char_password) //A unit test, first arg is name of suite to test, every class made has test associatedd with same name, 2nd arg has the name what it is testing
{
	Password my_password; 
	int actual = my_password.count_leading_characters("\n");
	ASSERT_EQ(1, actual); //1st arg is expected outcome, 2nd arg is function result
}

TEST(PasswordTest, double_lead_char_password) //A unit test, first arg is name of suite to test, every class made has test associatedd with same name, 2nd arg has the name what it is testing
{
	Password my_password; 
	int actual = my_password.count_leading_characters("NNNNOOOO");
	ASSERT_EQ(4, actual); //1st arg is expected outcome, 2nd arg is function result
}

TEST(PasswordTest, regular_password)
{
        Password my_password; 
        int actual = my_password.count_leading_characters("hello_there");
        ASSERT_EQ(1, actual);
}

TEST(PasswordTest, pass_with_space)
{
        Password my_password;
        int actual = my_password.count_leading_characters("Im cheese");
        ASSERT_EQ(1,actual);
}
//**********************HAS_MIXED_CASE()***************//
TEST(PasswordTest, less_than_two)
{
        Password my_password;
        bool actual = my_password.has_mixed_case("H");
        ASSERT_EQ(false, actual);
}

TEST(PasswordTest, all_lower)
{
        Password my_password;
        bool actual = my_password.has_mixed_case("hwuhgovuwrog");
        ASSERT_EQ(false, actual);
}

TEST(PasswordTest, all_upper)
{
        Password my_password;
        bool actual = my_password.has_mixed_case("EOGHSRG");
        ASSERT_EQ(false, actual);
}

TEST(PasswordTEst, mix_case)
{
        Password my_password;
        bool actual = my_password.has_mixed_case("efggoA");
        ASSERT_EQ(true, actual);
}
