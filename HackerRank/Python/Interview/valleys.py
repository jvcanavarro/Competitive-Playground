SEA_LEVEL = 0

def countingValleys(steps, path):
    hiker_level = SEA_LEVEL
    in_valley = False
    num_valleys = 0

    for step in path:
        if step == 'U':
            hiker_level += 1
            if hiker_level == SEA_LEVEL:
                in_valley = False
                num_valleys += 1

        elif step == 'D':
            hiker_level -= 1
            if hiker_level < SEA_LEVEL and not in_valley:
                in_valley = True
    return num_valleys
