/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, two_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("BB");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, three_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("CCC");
	ASSERT_EQ(3, actual);
}

TEST(PasswordTest, two_letter_new_case)
{
	Password my_password;
	int actual = my_password.count_leading_characters("aaA");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, one_letter_new_char)
{
	Password my_password;
	int actual = my_password.count_leading_characters("abA");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, no_char_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}