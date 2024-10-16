#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <file_extension>" << std::endl;
        return 1;
    }

    //Adicionar o ponto à extensão do ficheiro
    std::string extension = argv[1];
    if (extension[0] != '.') {
        extension = "." + extension;
    }

    //Listar os ficheiros com a extensão especificada
    for (const auto& entry : fs::directory_iterator(".")) {
        if (entry.is_regular_file() && entry.path().extension() == extension) {
            std::cout << entry.path().filename() << std::endl;
        }
    }

    return 0;
}
