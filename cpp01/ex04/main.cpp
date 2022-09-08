#include <iostream>
#include <fstream>

int replace_in_file(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   fs;
    std::fstream   to_write;
    std::string     new_file;
    std::string     file;
    int             i;
    char            c;
    fs.open(filename, std::ios_base::out);
    
    while (fs.get(c))
    {
        file.push_back(c);
    }

    i = 0;
    while (file[i])
    {
        if (file.find(s1.c_str(), i, s1.length()) == i)
        {
            new_file.append(s2);
            i += s1.length();
        }
        else
        {
            new_file.push_back(file[i]);
            i++;
        }
    }
    to_write.open((filename + ".replace").c_str(), std::ios_base::in);
    to_write.write(new_file.c_str(), new_file.length());
    to_write.close();

    fs.close();

    return (0);
}

int main( int argc, char *argv[] )
{
    std::string filename;
    std::string s1;
    std::string s2;

    if (argc != 4) 
    {
        std::cerr << "Usage: [filename] [s1] [s2]" << std::endl;
        return (1);
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    replace_in_file(filename, s1, s2);
    return (0);
}