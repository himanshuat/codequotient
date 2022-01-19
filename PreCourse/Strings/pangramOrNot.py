def isPangram(strings):
    result = ''
    alphabets = 'abcdefghijklmnopqrstuvwxyz'

    for string in strings:
        pangram = True
        for alphabet in alphabets:
            if alphabet not in string:
                pangram = False
                break
        
        if pangram:
            result += '1'
        else:
            result += '0'

    return result

if __name__ == "__main__":
    T = int(input().strip())
    strings = []
    for i in range(T):
        strings.append(input().strip())
    print(isPangram(strings))
