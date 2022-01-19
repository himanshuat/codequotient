def countVowelSubstr(string):
    vowels = 'aeiouAEIOU'
    count = 0
    length = len(string)

    for i in range(0, length):
        if string[i] in vowels:
            count += length - i

    return count % 10007

if __name__ == "__main__":
    str = input().strip()
    print(countVowelSubstr(str))