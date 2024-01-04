#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    m = len(sys.argv) - 1

    if m == 0:
        print("{} arguments.".format(m))
    elif m == 1:
        print("{} argument:".format(m))
    else:
        print("{} arguments:".format(m))

    if m >= 1:
        m = 0
        for arg in sys.argv:
            if m != 0:
                print("{}: {}".format(m, arg))
            m += 1
