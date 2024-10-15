#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = filesystem;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <file_extension>" << endl;
        return 1;
    }

    string file_extension = argv[1];

    if (file_extension[0] != '.') {
        file_extension = "." + file_extension;
    }

    try {
        for (const auto& entry : fs::recursive_directory_iterator(".")) {
            if (entry.is_regular_file() && entry.path().extension() == file_extension) {
                cout << entry.path().string() << endl;
            }
        }
    } catch (const fs::filesystem_error& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
