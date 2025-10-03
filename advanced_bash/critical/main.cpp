#include <iostream>
#include <string>
#include <vector>
#include <utility>

void addError(std::vector<std::pair<int, std::string>>& errors, int code, const std::string& message);
void streamError(const std::pair<int, std::string>& error, int iteration);

int main()
{
    std::vector<std::pair<int, std::string>> errors;

    addError(errors, 1, "Vervelende error");
    addError(errors, 2, "Nare error");
    addError(errors, 3, "Verschrikkelijk erge error");
    addError(errors, 4, "Ergste error ooit");
    addError(errors, 5, "Kleine error");

    std::cout << "Hello world" << std::endl;

    for (int iError = 0; iError < 100; ++iError)
    {
        const int errorIndex = iError % errors.size();
        streamError(errors[errorIndex], iError);
    }

    std::cerr << "Wow error message" << std::endl;
    std::cout << "Dit falende programma is nu ten einde." << std::endl;
    return 0;
}

void addError(std::vector<std::pair<int, std::string>>& errors, int code, const std::string& message)
{
    errors.push_back(std::make_pair(code, message));
}

void streamError(const std::pair<int, std::string>& error, int iteration)
{
    std::cerr << "Error " << error.first << ": " << error.second << " - op iteratie " << iteration << std::endl;
}