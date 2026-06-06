#include <bits/stdc++.h>
using namespace std;

// 50. Pow(x, n)
class PowSolution {
public:
    double myPow(double x, int n) {
        long long power = n;

        if (power < 0) {
            x = 1.0 / x;
            power = -power;
        }

        double ans = 1.0;

        while (power > 0) {
            if (power & 1)
                ans *= x;

            x *= x;
            power >>= 1;
        }
        return ans;
    }
};


// 11. Container With Most Water
class ContainerSolution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size() - 1,ans = 0;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);

            ans = max(ans, width * h);
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return ans;
    }
};

// 238. Product of Array Except Self
class ProductSolution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n, 1);
        int prefix = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};

int main() {

    // Pow(x,n)
    PowSolution p;
    cout << "2^10 = " << p.myPow(2.0, 10) << endl;

    // Container With Most Water
    ContainerSolution c;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Max Area = " << c.maxArea(height) << endl;

    // Product of Array Except Self
    ProductSolution pr;
    vector<int> nums = {1,2,3,4};
    vector<int> result = pr.productExceptSelf(nums);
    cout << "Product Except Self: ";
    for (int x : result)
        cout << x << " ";

    cout << endl;

    return 0;
}