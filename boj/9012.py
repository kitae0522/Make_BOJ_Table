class Stack:
    def __init__(self):
        self.data_list = []

    def is_empty(self):
        if self.size() == 0:
            return True
        else:
            return False

    def is_full(self):
        return False

    def push(self, data):
        if self.is_full():
            return
        self.data_list.append(data)

    def pop(self):
        if self.is_empty():
            return None
        return self.data_list.pop()

    def peek(self):
        if self.is_empty():
            return None
        return self.data_list[-1]

    def size(self):
        return len(self.data_list)

    def print_data(self):
        print(self.data_list)


def check_valid_vps(ps_str):

    stack = Stack()

    for ps in ps_str:
        if ps == "(":
            stack.push(ps)
        else:  # ")"
            if stack.is_empty():
                return False
            stack.pop()

    if stack.is_empty():
        return True
    else:
        return False


if __name__ == "__main__":
    def main():
        test_case_count = int(input())
        for i in range(test_case_count):
            ps_str = input()
            if check_valid_vps(ps_str) is True:
                print("YES")
            else:
                print("NO")

    main()
