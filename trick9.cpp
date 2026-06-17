#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 3, 8, 1};
    
    // Using emplace_back instead of push_back for better performance
    v.emplace_back(10); 
    
    // Itis --> Using a lambda for custom sorting without a separate function
    std::sort(v.begin(), v.end(), [](int a, int b) {
        return a > b; // Sort descending
    });
    
    for (int i : v) std::cout << i << " ";
    return 0;
}   
