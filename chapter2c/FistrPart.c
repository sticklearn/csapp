/* CS:APP Chapter 2 
homework:
	2.58 - 2.60
*/

typedef unsigned char *byte_pointer;
typedef unsigned char byte;

// 2.58
int is_show_endian()
{
	int number;
	byte c; 
	byte_pointer p;

	number = 0x12345678;
	c = number;
	p = (byte_pointer)&a;	
	
	if (*p == c)
		return 1;
	else 
		return 0;
}

// 2.59
int getLow(int x, int y)
{
	return x & 0xFF | y & ~0xFF;
}

// 2.60
unsigned replace_byte(unsigned x, unsigned char b, int i)
{
	unsigned char *p;
	p = (unsigned char *)&x;
	p[i] = b;
	return x;
}

// 2.61

