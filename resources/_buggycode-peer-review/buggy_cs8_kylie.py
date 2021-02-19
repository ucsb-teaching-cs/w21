def charInWord(word, char):
    if (type(word) == str) and (type(char) == str):
        for (c in word):
            if c == char:
                return True
            else:
                pass
            return False

if name == 'main':
    in_word = input()
    in_char = input()
    final = charInWord(input_str, num)
    if final == True:
        print("{} in {}".format(in_char, in_word))
    else:
        print("{} not in {}".format(in_char, in_word))
