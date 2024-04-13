def main():
    ai = 0
    aj = 0
    bi = 0
    bj = 0
    bn = 5
    rows = 5
    di = 0
    dj = 0
    dn = 0
    n = 5

    print("1.) ")
    for ai in range(1, n + 1):
        for aj in range(1, ai + 1):
            print("* ", end="")
        print()

    print("")
    print("2.) ")
    for ai in range(n, 0, -1):
        for aj in range(1, ai + 1):
            print("* ", end="")
        print()

    print("")
    print("3.) ")
    for bi in range(1, bn + 1):
        for bj in range(bn, 0, -1):
            if bi >= bj:
                print(" *", end="")
            else:
                print(" ", end="")
        print()

    print("")
    print("4.) ")
    word = "I LOVE DB"
    printed_words = set()   

    for i in range(len(word)):
        if word[i] != " ": 
            substring = word[:i+1]
            if substring not in printed_words:
                print(substring)
                printed_words.add(substring)


if __name__ == "__main__":
    main()