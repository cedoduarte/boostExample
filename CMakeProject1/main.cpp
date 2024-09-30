#include "entities/directory.h"

#include <iostream>
#include <boost/filesystem.hpp>

namespace fs = boost::filesystem;

int main() 
{
    // Define the path to the directory
    fs::path dirPath("C:/boost_1_86_0");  // Change this to a valid directory path

    // Check if the directory exists
    if (fs::exists(dirPath) && fs::is_directory(dirPath)) 
    {
        std::cout << "Directory exists: " << dirPath << std::endl;

        // Iterate through the directory
        std::cout << "Listing files in directory:" << std::endl;
        for (const auto& entry : fs::directory_iterator(dirPath)) 
        {
            Directory directory;
            std::string filename = entry.path().filename().string();
            std::string path = entry.path().string();
            directory.setName(filename);
            directory.setPath(path);
            directory.print();
        }
    }
    else
    {
        std::cerr << "Directory does not exist: " << dirPath << std::endl;
    }
    return 0;
}