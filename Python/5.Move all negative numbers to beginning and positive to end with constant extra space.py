def separateNegativeAndPositive(nums):
    i = 0
    j = len(nums) - 1
    while i < j:
        if nums[i] > 0 and nums[j] < 0:
            nums[i], nums[j] = nums[j], nums[i]
            i += 1
            j -= 1
        elif nums[i] > 0 and nums[j] > 0:
            j -= 1
        elif nums[i] < 0 and nums[j] < 0:
            i += 1
        else:
            i += 1
            j -= 1
    return nums
