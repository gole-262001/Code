class Solution:
    def sortColors(self, nums: List[int]) -> None:
        arr = [0, 0, 0]
        for num in nums:
            if num == 0:
                arr[0] += 1
            elif num == 1:
                arr[1] += 1
            else:
                arr[2] += 1

        for i in range(len(nums)):
            if arr[0] > 0:
                nums[i] = 0
                arr[0] -= 1
            elif arr[1] > 0:
                nums[i] = 1
                arr[1] -= 1
            else:
                nums[i] = 2
                arr[2] -= 1
The Python code uses lists instead of vectors, and the for loop syntax is slightly different, but the logic remains the same. The sortColors function takes a list nums containing integers representing colors and sorts them in-place as required.





