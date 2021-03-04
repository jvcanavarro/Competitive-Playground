from collections import defaultdict

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    d = defaultdict(int)

    for i in ar:
        d[i] += 1

    d = {key: (value // 2) for key, value in d.items()}
    return sum(d.values())
