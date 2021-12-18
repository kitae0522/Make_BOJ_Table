if __name__ == '__main__':
    A, B, C = map(int, input().split())
    print("{}\n{}\n{}\n{}".format((A+B) % C, ((A % C)+(B % C)) %
                                  C, (A*B) % C, ((A % C)*(B % C)) % C))
