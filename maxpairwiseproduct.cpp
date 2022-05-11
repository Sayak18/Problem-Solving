#include <iostream>
#include <vector>
#include <algorithm>

/*int MaxPairwiseProduct(const std::vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                numbers[first] * numbers[second]);
        }
    }

    return max_product;
}*/
long long MaxPairwiseProduct(const std::vector<long long>& numbers) {
    long long max_product;
    int i,j;
    int n = numbers.size();
    int maxindex1=-1;
    for(i=0;i<n;i++)
    {
        if((maxindex1==-1)||((numbers[i]>numbers[maxindex1])))
        {
            maxindex1=i;
        }
    }
    int maxindex2=-1;
    for(j=0;j<n;j++)
    {
        if((j!=maxindex1)&&((maxindex2==-1)||(numbers[j]>numbers[maxindex2])))
        {
            maxindex2=j;
        }
    }
    max_product=(long long)numbers[maxindex1]*(long long)numbers[maxindex2];
    return max_product;
}


int main() {
    int n;
    std::cin >> n;
    std::vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}

