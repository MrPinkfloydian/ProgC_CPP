
#include <iostream>
#include <filesystem>
#include <string>
#include <iomanip>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <file_extension>" << std::endl;
        return 1;
    }
 
    std::string extension = argv[1];
    if (extension[0] != '.') {
        extension = "." + extension;
    }

    //linha do cabeçalho + separador "----": estrutura
    std::cout << std::left << std::setw(30) << "Filename" << "Size (bytes)" << std::endl;
    std::cout << std::string(50, '-') << std::endl;

    //linha de pesquisa: de dados
    for (const auto& entry: fs::directory_iterator(".")) {
        if (entry.is_regular_file() && entry.path().extension() == extension) {
            std::cout << std::left << std::setw(30) << entry.path().filename().string()
                      << entry.file_size() << std::endl;
        }
    }

    return 0;
}