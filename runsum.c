#include <stdio.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* runningSum = (int*)malloc(numsSize * sizeof(int));
    if (runningSum == NULL) {
        *returnSize = 0;
        return NULL;
    }

    runningSum[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        runningSum[i] = runningSum[i - 1] + nums[i];
    }

    *returnSize = numsSize;
    return runningSum;
}