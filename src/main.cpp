#include <iostream>
#include <catch2/catch_all.hpp>

std::uint64_t Fibonacci(std::uint64_t number) {
    //return 5;
    return number < 2 ? 1 : Fibonacci(number - 1) + Fibonacci(number - 2);
}

TEST_CASE("Fibonacci") {
    CHECK(Fibonacci(0) == 1);
    // some more asserts..
    CHECK(Fibonacci(5) == 8);
    // some more asserts..

    // now let's benchmark:
    BENCHMARK("Fibonacci 20") {
        return Fibonacci(20);
    };

    BENCHMARK("Fibonacci 25") {
        return Fibonacci(25);
    };

    BENCHMARK("Fibonacci 30") {
        return Fibonacci(30);
    };

    BENCHMARK("Fibonacci 35") {
        return Fibonacci(35);
    };
}

int foo (int integer){

	int new_integer = integer + 5;

	return new_integer;
}


int main()

{

    Catch::Session session; #// There must be exactly one instance

//    int returnCode = session.applyCommandLine( argc, argv );
//  	if( returnCode != 0 ) #// Indicates a command line error
//       return 0;

    int result = Catch::Session().run();

    Subcombinator subcombinator("a");

    std::cout << "Hello, World!" << std::endl;

    //int numFailed = session.run();

    return 0;
}
