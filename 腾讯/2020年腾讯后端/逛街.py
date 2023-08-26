from typing import List



def maxHouseNumber(num:int, nums:List):
    stack = []
    left = []
    right = []
    for i in range(1,num+1):
        left[i] = len(stack)
        while len(stack) != 0 and stack[-1] <= nums[i]:
            stack.pop()
        stack.push(nums[i])
    while len(stack) != 0:
        stack.pop()
        for i in range(num,-1):
            right[i] = len(stack)
            while len(stack) != 0 and stack[-1] <= nums[i]:
                stack.pop()
            stack.push(nums[i])
        for i in range(1,num+1,1):
            print(left[i]+right[i]+1)

if __name__ == "__main__":
    num = 6
    nums = [5,3,8,3,2,5]
    maxHouseNumber(num, nums)