def isAnagram(string1,string2):
    alphabets = 'abcdefghijklmnopqrstuvwxyz'
    alphabets += alphabets.upper()

    for alphabet in alphabets:
        if string1.count(alphabet) != string2.count(alphabet):
            return False
    return True

if __name__=="__main__":
    t = int(input().strip())
    for i in range(t):
        string1 = input().strip()
        string2 = input().strip()
        answer = isAnagram(string1,string2)
        if (answer):
            print("Yes")
        else:
            print("No")