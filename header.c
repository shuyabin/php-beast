
/*
 * You can modify this sign to disguise your encrypt file
 */
char encrypt_file_header_sign[] = {
	0xe8, 0x1ed, 0xa4, 0x0c,
	0x3d7, 0xb2, 0x60, 0x3e7
};

int encrypt_file_header_length = sizeof(encrypt_file_header_sign);
