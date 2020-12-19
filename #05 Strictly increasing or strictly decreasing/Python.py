def solve(nums):
        if len(nums) < 2:
            return True

        asc = True if nums[0] < nums[1] else False

        for i in range(len(nums) - 1):
            if asc:
                if nums[i] >= nums[i + 1]:
                    return False
            else:
                if nums[i] <= nums[i + 1]:
                    return False

        return True
if __name__ == '__main__':
     print(solve([1,4,5,2]))
