#include "square_code.h"
#include <cctype>
#include <cmath>

namespace square_code {

ciphertext::ciphertext(const std::string& input) {
    for (char ch : input) {
        if (std::isalnum(static_cast<unsigned char>(ch))) {
            text += std::tolower(static_cast<unsigned char>(ch));
        }
    }
}

std::string ciphertext::normalized_cipher_text() const {
    if (text.empty()) {
        return "";
    }

    int len = text.length();
    int c = std::ceil(std::sqrt(len));
    int r = std::ceil(static_cast<double>(len) / c);

    std::string result = "";
    for (int col = 0; col < c; ++col) {
        if (col > 0) {
            result += " ";
        }
        for (int row = 0; row < r; ++row) {
            int idx = row * c + col;
            if (idx < len) {
                result += text[idx];
            } else {
                result += " ";
            }
        }
    }

    return result;
}

}
