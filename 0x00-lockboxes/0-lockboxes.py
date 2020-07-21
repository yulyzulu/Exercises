#!/usr/bin/python3


def canUnlockAll(boxes):
    """Method that determinates if all the boxes can be opened"""
    length = len(boxes)
    keys = []
    state = []

    for i in range(length):
        state.append(0)
    state[0] = 1

    for i in boxes[0]:
        keys.append(i)

    for key in keys:
        if key < length and state[key] == 0:
            state[key] = 1
            for y in boxes[key]:
                if y not in keys:
                    keys.append(y)
    if 0 in state:
        return False
    else:
        return True
