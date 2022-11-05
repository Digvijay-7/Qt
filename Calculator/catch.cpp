#include "catch.hpp"
#include <QString>
#include <cmath>
#include <postfix.h>

TEST_CASE( "checking the precedence", "[prec]" ) {
    REQUIRE(prec('^') == 3 );
    REQUIRE(prec('/') == 2 );
    REQUIRE(prec('*') == 2 );
    REQUIRE(prec('+') == 1 );
    REQUIRE(prec('-') == 1 );
}

TEST_CASE("Checking the infixToPostFix","[infixtoPostFix]"){
      REQUIRE(infixToPostfix("5+4*3+2") == "543*+2+");
}

TEST_CASE("Checking the postfix evaluation","[evaluatePsotfix]"){
    REQUIRE(evaluatePostfix("543*+2+")==19);
}
