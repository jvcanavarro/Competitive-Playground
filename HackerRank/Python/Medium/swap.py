def minimumSwaps(arr):
    swaps = 0
    sorted_arr = arr.copy()
    sorted_arr.sort()

    d = {}
    for i in range(len(arr)):
        d[arr[i]] = i

    temp = 0
    for i in range(len(arr)):
        if arr[i] != sorted_arr[i]:
            temp = arr[i]

            # swap values
            arr[i], arr[d[sorted_arr[i]]] =   arr[d[sorted_arr[i]]], arr[i]

            # update hash
            d[temp] = d[sorted_arr[i]]
            d[sorted_arr[i]] = i

            swaps += 1

    return swaps
