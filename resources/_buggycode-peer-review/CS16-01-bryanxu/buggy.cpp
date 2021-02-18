// prints out the frequency of letters in a string, in alphabetical order. Also removes non-alphabetical characters
void print_freq(string sentence, int size){
    string new_sentence = sort_string_remove_non_alpha(sentence, size);        // assume that sorting sentence works, and that non-alphabetical characters are removed
    int count = 0;  
    char m = ' ';  
    char n = ' ';                                             // we go down the line of our new_sentence and compare, and determine their frequencies by appending our count
    for (int i = 0; i < size; i++) {
        m = newString[i];
        n = newString[i+1];
        count++;
        if (n != m) {
            cout << endl << m << ": " << count;  // when two different letters are next to each other, the count stops and we output
            count = 0;
        }
    }
}
