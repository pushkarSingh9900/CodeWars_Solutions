#include <vector>
#include <cmath>
#include <queue>

std::vector<int> squareOrSquareRoot(const std::vector<int>& array)
{   std::vector <int> res;
  
    for (int i=0;i<array.size();i++){
      if(sqrt(array[i]) - ((int) sqrt(array[i])) > 0) res.push_back(array[i] * array[i]);
      else res.push_back(sqrt(array[i]));
         
    }
  
    return res;
}


// Pushkar Singh