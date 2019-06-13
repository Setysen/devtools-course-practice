// Copyright 2019 Emshanov Anderi
#ifndef MODULES_AFFINE_CIPHER_INCLUDE_AFFINE_CIPHER_H_
#define MODULES_AFFINE_CIPHER_INCLUDE_AFFINE_CIPHER_H_

#include <string>

class AffineCipher {
 public:
	static const int a = 17;
	static const int b = 20;
    static std::string Encrypt(const std::string& message);
    static std::string Decrypt(const std::string& cipher);

#endif  // MODULES_AFFINE_CIPHER_INCLUDE_AFFINE_CIPHER_H_
