class Solution {
public:
    unordered_map <string, string> mp;
    int count = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        mp[to_string(count)] = longUrl;
        return to_string(count);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl] ;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));