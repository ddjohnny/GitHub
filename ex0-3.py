def best_change(sum, coins):
    optimal = None

    if sum <= 0:
        return 0, None

    if sum in coins:
        return 1, {sum: 1}

    for i in coins:
        if sum - i <= 0:
            continue

        variant = list(best_change(sum - i, coins))

        if variant[0] == 0:
            variant[1] = {}

        variant[0] += 1

        if i not in variant[1]:
            variant[1][i] = 0

        variant[1][i] += 1

        if optimal == None or variant[0] < optimal[0]:
            optimal = tuple(variant)

    if optimal == None:
        return 0, None

    return optimal

print(best_change(21, (1, 5, 8)))
