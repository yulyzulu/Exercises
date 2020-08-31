#!/usr/bin/python3

import signal
import sys

def signal_fun(signal, fra):
    print('File size: {}'.format(size))
    for k, v in sorted(state.items()):
        print('{}: {}'.format(k, v))
    sys.exit(0)

state = {}
size = 0
count = 1

for line in sys.stdin:
    tok = line.split(' ')
    status = tok[7]
    file1 = tok[8]

    if status in state:
        state[status] = state[status] + 1
    else:
        state[status] = 1

    size = size + int(file1)
    if count % 10 == 0:
        print('File size: {}'.format(size))
        for k, v in sorted(state.items()):
            print('{}: {}'.format(k, v))
    count = count + 1
    signal.signal(signal.SIGINT, signal_fun)
