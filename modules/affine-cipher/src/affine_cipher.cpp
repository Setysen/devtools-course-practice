// Copyright 2019 Emshanov Andrei
#include <string>

#include "include/affine_cipher.h"

std::string AffineCipher::Encrypt(const std::string& message) {
		
	string cipher = "";
	for (int i = 0; i < msg.length(); i++)
	{
		if (msg[i] != ' ')
			cipher = cipher + (char)((((a * (msg[i] - 'A')) + b) % 26) + 'A');
		else 
			cipher += msg[i];
	}
	return cipher;
}

std::string AffineCipher::Decrypt(const std::string& cipher) {
	string msg = "";
	int a_inv = 0;
	int flag = 0;

	for (int i = 0; i < 26; i++)
	{
		flag = (a * i) % 26;

		if (flag == 1)
		{
			a_inv = i;
		}
	}
	for (int i = 0; i < cipher.length(); i++)
	{
		if (cipher[i] != ' ')
			msg = msg + (char)(((a_inv * ((cipher[i] + 'A' - b)) % 26)) + 'A');
		else
			msg += cipher[i];
	}

	return msg;
}
