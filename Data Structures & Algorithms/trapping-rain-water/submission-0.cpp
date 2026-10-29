
class Solution {
public:
    int trap(vector<int>& height) {

        int deb = 0;
        int fin = height.size() - 1;

        int leftMax = 0;
        int rightMax = 0;

        int res = 0;

        while (deb < fin) {

            if (height[deb] < height[fin]) {

                leftMax = max(leftMax, height[deb]);

                res += leftMax - height[deb];

                deb++;
            }
            else {

                rightMax = max(rightMax, height[fin]);

                res += rightMax - height[fin];

                fin--;
            }
        }

        return res;
    }
};
