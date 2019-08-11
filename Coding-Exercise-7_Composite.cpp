#include "Coding-Exercise-7_Composite.hpp"

int sum(const vector<ContainsIntegers*> items) {
    int result = 0;
    for (auto item : items)
        result += item->sum();
        
    return result;
}
