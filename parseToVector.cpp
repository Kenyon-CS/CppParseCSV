#include <iostream>
#include <sstream>
#include <vector>
#include <string>

// Function to parse a comma-delimited string into a vector of strings
std::vector<std::string> parseCommaDelimitedString(const std::string& str) {
    std::vector<std::string> result;
    std::string item;
    std::stringstream ss(str);
    
    // Use getline with comma as the delimiter to split the string
    while (std::getline(ss, item, ',')) {
        result.push_back(item);
    }
    
    return result;
}

int main() {
    std::string input = "apple,banana,cherry,dates";
    std::vector<std::string> parsedStrings = parseCommaDelimitedString(input);
    
    // Output the parsed strings
    for (const auto& s : parsedStrings) {
        std::cout << s << std::endl;
    }

    return 0;
}
