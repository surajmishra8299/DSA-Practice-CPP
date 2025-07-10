#include <iostream>
#include <vector>

int main() {
     std::vector<int> arr = {2,3,6,5,7,11,15,8}; 

    bool arePairwiseCoprime = true;

     for (size_t i = 0; i < arr.size(); ++i) {
        for (size_t j = i + 1; j < arr.size(); ++j) {
            int num1 = arr[i];
            int num2 = arr[j];
            int smallerNum = (num1 < num2) ? num1 : num2;

 
            for (int k = 2; k <= smallerNum; ++k) {
                if (num1 % k == 0 && num2 % k == 0) {
                    arePairwiseCoprime = false;
                    break; 
                }
            }
          
        }
    }

    if (arePairwiseCoprime) {
        std::cout << "All pairs in the array are coprime." << std::endl;
    } else {
        std::cout << "Pairs in the array are not all coprime." << std::endl;
    }

    return 0;
}
