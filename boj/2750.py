def shell_sort(num_list):
    g = len(num_list) // 2
    while g > 0:
        for i in range(g, len(num_list)):
            data = num_list[i]
            idx = i
            for j in range(i-g, -1, -g):
                if num_list[j] > data:
                    num_list[j+g] = num_list[j]
                    idx = j
                else:
                    break
            num_list[idx] = data
        g = g // 2


if __name__ == "__main__":
    def main():
        data_count = int(input())
        num_list = []
        for i in range(data_count):
            data = int(input())
            num_list.append(data)

        shell_sort(num_list)

        for num in num_list:
            print(num)
    main()
