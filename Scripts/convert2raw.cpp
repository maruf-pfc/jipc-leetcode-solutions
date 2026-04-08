#include <bits/stdc++.h>
using namespace std;

int main() {
    string link;

    while (getline(cin, link)) {
        if (link.empty()) continue;

        // Only process github blob links
        if (link.find("github.com") == string::npos || link.find("/blob/") == string::npos) {
            cout << link << '\n';
            continue;
        }

        // Example:
        // https://github.com/user/repo/blob/branch/path/file.cpp

        // Step 1: remove https://github.com/
        string temp = link.substr(link.find("github.com") + 11);

        // temp = user/repo/blob/branch/path/file.cpp

        vector<string> parts;
        stringstream ss(temp);
        string segment;

        while (getline(ss, segment, '/')) {
            parts.push_back(segment);
        }

        // parts = [user, repo, blob, branch, ...file path...]

        if (parts.size() < 5) {
            cout << link << '\n';
            continue;
        }

        string user = parts[0];
        string repo = parts[1];
        string branch = parts[3];

        // Build file path
        string file_path = "";
        for (int i = 4; i < parts.size(); i++) {
            file_path += "/" + parts[i];
        }

        // Final raw URL
        string raw = "https://raw.githubusercontent.com/" 
                     + user + "/" 
                     + repo + "/refs/heads/" 
                     + branch + file_path;

        cout << raw << '\n\n';
    }
}