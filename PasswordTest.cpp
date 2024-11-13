/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
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


// Tests for has_mixed_case
TEST(PasswordTest, has_empty_mixed_case)
{
	Password my_password;
	int actual = my_password.has_mixed_case("");
	ASSERT_EQ(false, actual);
}

TEST(PasswordTest, has_one_mixed_case)
{
	Password my_password;
	int actual = my_password.has_mixed_case("Bba");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, has_two_mixed_case)
{
	Password my_password;
	int actual = my_password.has_mixed_case("AaAa");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, has_leading_mixed_case)
{
	Password my_password;
	int actual = my_password.has_mixed_case("cC");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, has_two_different_mixed_case)
{
	Password my_password;
	int actual = my_password.has_mixed_case("AabB");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, has_no_mixed_case)
{
	Password my_password;
	int actual = my_password.has_mixed_case("ffffff");
	ASSERT_EQ(false, actual);
}