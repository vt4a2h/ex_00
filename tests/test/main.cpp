#include "strfunctions.h"

#include <gtest/gtest.h>

TEST(StringFunctions, strlen)
{
    EXPECT_EQ(str_f::strlen("foo"), 3) << "strlen() should calculate string length";
}

TEST(StringFunctions, strcpy)
{
    const char *src = "foobar";
    char dst[6]{0};

    str_f::strcpy(dst, src);
    EXPECT_STREQ(dst, "foobar") << "strcpy should copy src to dst";
}

TEST(StringFunctions, strcmp)
{
    const char *string1 = "aaafge";
    const char *string2 = "fgefd";
    EXPECT_EQ(str_f::strcmp(string1, string2), -1) << "strcmp should return -1 if string1 less than string2";
    EXPECT_EQ(str_f::strcmp(string2, string1), 1)  << "strcmp should return  1 if string2 more than string1";
    EXPECT_EQ(str_f::strcmp(string1, string1), 0)  << "strcmp should return  0 if strings are equals";
}

TEST(StringFunctions, strrev)
{
    char p[6] {"level"};
    str_f::strrev(p);
    EXPECT_STREQ(p, "level") << "these word should be a palindrome";

    char np[4] {"foo"};
    str_f::strrev(np);
    EXPECT_STRNE(np, "foo") << "these word must not be a palindrome";
}

TEST(StringFunctions, strcat)
{
    const char *src = "bar";
    char dst[7] {"foo"};

    str_f::strcat(dst, src);
    EXPECT_STREQ(dst, "foobar") << "strcat should concatenate two string";
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#include "strfunctions.cpp"
