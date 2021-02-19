

def calcul_per(line):
    """
    calule perimetre of a list
    """
    per = 0
    # loop until before the last
    for i in range(len(line) - 1):
        if line[i] == 1:
            per += 4
            # check if the adjacent is 1
            if line[i + 1] == 1:
                per -= 2
    # if last element 1 add 4
    idx_last = len(line) - 1
    if line[idx_last] == 1:
        per += 4
    return per


def save_column(line):
    """
    return the list of index of 1 if found
    """
    list_index = []
    for idx, val in enumerate(line):
        if val == 1:
            list_index.append(idx)
    return list_index


idx_list = [4, 5]


def check_collesion(list_index, line):
    """
    if in a list we found 1 and its index is in
    the list given we consider it a collision
    we return nb of collision
    """
    nb_collistion = 0
    for idx, val in enumerate(line):
        if val == 1 and idx in list_index:
            nb_collistion += 1
    return nb_collistion


def island_perimeter(grid):
    """
    for each iteration in a grid of lists
    we calcul the perimetre of a list
    we check nb of collision with the previous list
    we save the list index of 1 of a single line
    """
    sum_per = 0
    list_index = []
    for line in grid:
        per_line = calcul_per(line)
        sum_per += per_line
        nb_collision = check_collesion(list_index, line)
        list_index = save_column(line)
        sum_per -= 2 * nb_collision
    return sum_per
