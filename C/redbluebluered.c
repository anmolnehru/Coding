//hackerrank coding challenge question:-

/*
 * Complete the function below.
 */
int wordpattern(string pattern, string input) {




}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    int res;
    string _pattern;
    getline(cin, _pattern);
    
    string _input;
    getline(cin, _input);
    
    res = wordpattern(_pattern, _input);
    fout << res << endl;
    
    fout.close();
    return 0;
}