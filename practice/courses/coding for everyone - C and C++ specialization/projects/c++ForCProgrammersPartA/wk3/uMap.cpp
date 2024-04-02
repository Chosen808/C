#include <iostream>
#include <string>
#include <unordered_map>


main ()
{
    std::unordered_map<std::string, std::string> g;

    g["a"] = "b";
    g["a"] = "c";
    g["b"] = "c";
    g["c"] = "d";
    g["d"] = "g";

    std::cout << g["a"] << "\n";

    return 0;
}