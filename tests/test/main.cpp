#include "strfunctions.h"

#include <gtest/gtest.h>

TEST(StringFunctions, strlen)
{
    EXPECT_EQ(str_f::strlen("foo"), 3) << "length of \"foo\" should be equal 3";
}

TEST(StringFunctions, strcpy)
{
    const char *src = "foobar";
    char dst[6]{0};

    str_f::strcpy(dst, src);
    EXPECT_STREQ(dst, src) << "\"foobar\" should be equal \"foobar\"";
}

TEST(StringFunctions, strcmp)
{
    const char *string1 = "aaafge";
    const char *string2 = "fgefd";
    EXPECT_EQ(str_f::strcmp(string1, string2), -1) << "\"aaafge\" should be less than \"fgefd\"";
    EXPECT_EQ(str_f::strcmp(string2, string1), 1)  << "\"aaafge\" should be more than \"fgefd\"";
    EXPECT_EQ(str_f::strcmp(string1, string1), 0)  << "\"aaafge\" should be equal \"aaafge\"";
}

TEST(StringFunctions, strrev)
{
    char p[6] {"level"};
    str_f::strrev(p);
    EXPECT_STREQ(p, "level") << "\"level\" should be palindrome";

    char np[4] {"foo"};
    str_f::strrev(np);
    EXPECT_STRNE(np, "foo") << "\"foo\" should not be palindrome";
}

TEST(StringFunctions, strcat)
{
    const char *src = "bar";
    char dst[7] {"foo"};

    str_f::strcat(dst, src);
    EXPECT_STREQ(dst, "foobar") << "\"foo\" + \"bar\" should be equal \"foobar\"";
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#include "strfunctions.cpp"
