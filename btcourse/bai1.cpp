bool isEqualCaseInsensitive(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    return (s1 == s2);
}