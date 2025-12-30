# 数组练习总结
### 第七题
==数组元素的搬运（移动零）==
* 实现逻辑：双指针法[^1]
```
void MoveNoneZero(int * arr, int size)
{
    int NoneZeroIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[NoneZeroIndex] = arr[i];
            NoneZeroIndex++;
        }
    }

    for (int i = NoneZeroIndex ; i < size; i++)
    {
        arr[i] = 0;
    }
}
```
- 双指针法，一个是快指针，一个是慢指针，快指针正常遍历，满指针用来标记下一个有效元素的位置。
- 本来的想法是使用冒泡排序，但是没有成功，实际上是对冒泡排序的做法不够熟练
```
void moveZeroes(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        // 每次遍历都会将一个0“冒”到当前范围的末尾，所以内循环次数递减
        for (int j = 0; j < numsSize - 1 - i; j++) {
            // 如果当前元素是0，而下一个元素不是0，则交换它们
            if (nums[j] == 0 && nums[j + 1] != 0) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
```
- 从效率角度来讲双指针法更好。
### 第八题
==寻找数组的中心下标==
- 当我们找到时间复杂度更低的算法时，我们往往可以把步骤写的更加精简。
- 左侧之和与右侧之和有定量关系，之间的桥梁是整个数组元素之和以及当前位置元素的值，而计算左侧或右侧之和需要用到循环，所以不必都使用循环，只要一侧使用循环另一侧就出来了
- 如何避免嵌套循环，也就是外层循环遍历元素，内层循环求和，实际上，两个循环有重叠的部分，所以可以只写一层循环即可，只是在之前的基础上加上当前位置元素。
```
for (int i = 0 ; i < size; i++)
    {
       if (LeftOfSum == sum - LeftOfSum - arr[i])
       {
            index = i;
            found = 1;
            break;
       }
       LeftOfSum += arr[i];
    }
```
### 第九题
==有序数组的插入==
- 找到需要插入的位置，将后面元素整体后移
- 注意default（默认的位置），默认的插入位置可能是首位也可能是末位。后面再进行修改即可。

[^1]: 不一定是指针类型，只是操作的结果，即下标的偏移类似于指针操作的效果。