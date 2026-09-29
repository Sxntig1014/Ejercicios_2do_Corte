#ifndef SQUARE_CODE_H
#define SQUARE_CODE_H

#include <string>
#include <vector>

namespace square_code {

class ciphertext {
private:
    std::string text;

public:
    ciphertext(const std::string& input);

    std::string normalized_cipher_text() const;
};

}

#endif
