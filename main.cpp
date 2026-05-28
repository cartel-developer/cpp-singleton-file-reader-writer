#include <iostream>
#include <fstream>
#include <memory>

class FileReaderWriter {
    // Singleton
public:
    static FileReaderWriter &getInstance() {
        static FileReaderWriter fileReaderWriter;
        return fileReaderWriter;
    }

    FileReaderWriter(const FileReaderWriter &) = delete;
    FileReaderWriter operator=(const FileReaderWriter &) = delete;

//    function
    static void write(const std::string& fileName, const std::string& content) {
        std::unique_ptr<std::fstream> file = std::make_unique<std::fstream>(fileName,std::ios::out);
        *file << content;
    }

    static std::string read(const std::string& fileName) {
        std::unique_ptr<std::fstream> file = std::make_unique<std::fstream>(fileName,std::ios::in);
        std::string content;
        std::getline(*file,content);
        return content;
    }

private:
    FileReaderWriter() {}

};

int main() {
    FileReaderWriter& fileReaderWriter = FileReaderWriter::getInstance();
    FileReaderWriter::write("testFile.txt", "Hello Coders!");
    std::cout << FileReaderWriter::read("testFile.txt");

    return 0;
}
