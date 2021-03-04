def jumpingOnClouds(c):
    pos = 0
    jumps = 0
    last_cloud = len(c) - 1

    while pos != last_cloud:
        if (pos+2) <= last_cloud:
            if c[pos+2] == 0:
                pos += 2
            else:
                pos += 1
        else:
            pos += 1
        jumps += 1

    return jumps
