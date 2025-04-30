// here we will be using one key, which help to encrypt
// because if we can't use it, then another person can easily encrypt it

#include<iostream>
#include<string>
#include<fstream>
#include"IO.hpp" // baar baar import nhi hogi by reference pass hogi
#include<sstream>

using namespace std;


 // basically we always need fstream to further do thing

 class ReadEnv{
    public:
        std::string getenv() {
            std::string env_path = ".env";
            IO io(env_path);
            std::fstream f_stream = io.getFileStream();
            std::stringstream buffer;
            buffer << f_stream.rdbuf();
            std::string content = buffer.str();
             return content;
        }
 };