//
// Created by jonathan on 2019-08-15.
// https://leetcode.com/problems/container-with-most-water/
#include "stdio.h"

int maxArea(int* height, int heightSize);

int main(int argc, char *argv[]) {
    int array[] = {1,8,6,2,5,4,8,3,7};
    int size = 9;
    int temp = maxArea(array, size);
    printf("%d\n", temp);
}

int maxArea(int* height, int heightSize){
    int *left = height;
    int *right = height + heightSize - 1;
    int max_vol = 0;
    int vol;
    int min_height;
    int width;

    while (left < right) {
        if (*left < *right) {
            min_height = *left;
        } else {
            min_height = *right;
        }
        width = (right - left);
        vol = min_height * width;
        //printf("%d %d %d %d %d\n", *left, *right, min_height, width, vol);
        if (max_vol < vol) {
            max_vol = vol;
        }
        if (*left < *right) {
            left++;
        } else {
            right--;
        }
    }
    return max_vol;
}

