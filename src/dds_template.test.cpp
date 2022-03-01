#include <library_name/library_header.hpp>
#include <catch2/catch.hpp>

TEST_CASE("Testing Greeting")
{
    CHECK(library::greeting() == "Hello from the DDS Template!");
}