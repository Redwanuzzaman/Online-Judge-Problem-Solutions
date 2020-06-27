for i in range(int(input())):
    string = input()
    min_count = min(string.count("0"), string.count("1"))
    print("DA") if min_count % 2 == 1 else print("NET")
