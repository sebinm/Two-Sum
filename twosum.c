#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;

    int i, j;
    int* arr_return = (int*) malloc(2 * sizeof(int));

    if(!arr_return)
    {
        // check if the pointer is valid
        fprintf(stderr,"Invalid pointer!\n");
        return NULL;
    }

    for(i = 0; i < numsSize; ++i)
    {
        for(j = 0; j < numsSize; ++j)
        {
            // we can also use for (j = i + 1; j < numSize; ++j)
            if(i != j)
            {
                if (nums[i] + nums[j] == target)
                {
                    arr_return[0] = i;
                    arr_return[1] = j;
                    return arr_return;
                    /*
                        we stop here because we don't care about the other iterations
                    */
                }
            }
        }
    }
    return NULL;
}

int main(void)
{
    short int i;
    int arr[] = {2, 7, 11, 15};
    int* returnSize = (int*) malloc(sizeof(int));
    int* arr_compose = twoSum(arr, 4, 9, returnSize);

    if(!arr_compose)
    {
        exit(EXIT_FAILURE);
    }

    for(i = 0; i < *returnSize; ++i)
    {
        printf("%d ", arr_compose[i]);
    }

    return 0;
}