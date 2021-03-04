def repeatedString(s, n):
    sub = n % len(s)
    times = n // len(s)

    return (s.count('a') * times) + s[:sub].count('a')
