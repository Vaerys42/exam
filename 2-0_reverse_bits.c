
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r = 0;
	unsigned		byte_len = 8;

	while (byte_len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}