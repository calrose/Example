#include <gtest/gtest.h>
#include "../datafetcher.hpp"
#include "../shoppingList.hpp"

TEST(shoppingTests, addExpirationDateTest)
{
}

TEST(shoppingTests, curlppTest)
{
    std::stringstream tmpstream;
    EXPECT_EQ(EXIT_SUCCESS, simpleTest(tmpstream));
    EXPECT_EQ("{\"message\":\"Hello, World!\"}", tmpstream.str());
}

TEST(shoppingTests, displayTest)
{
    std::stringstream sampleInput("[{\"_id\":\"60785b1bbfde904cdb997698\",\"name\":\"pizza\",\"count\":3,\"__v\":0},{\"_id\":\"60788ac447db19f835a80407\",\"name\":\"apples\",\"count\":6,\"__v\":0},{\"_id\":\"60788aeb47db19f835a80408\",\"name\":\"carrots\",\"count\":2,\"__v\":0},{\"_id\":\"60788b0847db19f835a80409\",\"name\":\"toothpicks\",\"count\":1,\"__v\":0}]");

    std::stringstream tmpstream;
    generateOutput(sampleInput, tmpstream);

    std::stringstream expectedOutput;
    expectedOutput << "pizza x3\n"
                   << "apples x6\n"
                   << "carrots x2\n"
                   << "toothpicks x1\n";


    EXPECT_EQ(expectedOutput.str(), tmpstream.str());
}

TEST(shopingTests, addRemoveTest)
{
    std::stringstream sampleInput;

    std::stringstream tmpstream;
    //need id
    addItem("[{\"_id\":\"_\",\"name\":\"pasta\",\"count\":2\"__v\":0}]");
    getList(sampleInput);
    generateOutput(sampleInput, tmpstream);

    EXPECT_TRUE(tmpstream.str().find("pasta"));

    std::stringstream expectedOutput;
    removeItem("60785b1bbfde904cdb997698");

    sampleInput.clear();
    getList(sampleInput);

    EXPECT_FALSE(sampleInput.str().find("60785b1bbfde904cdb997698"));
}