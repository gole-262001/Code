class Solution
{
public:
    void reversenums(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int index = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            reversenums(nums);
        }
        else
        {
            for (int j = n - 1; j >= index; j--)
            {
                if (nums[index] < nums[j])
                {
                    swap(nums[index], nums[j]);
                    sort(nums.begin() + index + 1, nums.end());
                    break;
                }
            }
        }
    }
};
