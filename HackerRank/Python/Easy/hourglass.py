def hourglassSum(arr):
    max_hg = -9 * 6 - 1
    for i in range(1, 5):
        for j in range(1, 5):
            hg_sum = sum(arr[i-1][j-1:j+2]) + arr[i][j] + sum(arr[i+1][j-1:j+2])
            if hg_sum > max_hg:
                max_hg = hg_sum
    return max_hg
