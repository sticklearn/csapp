/* CS:APP
	2.58
*/

typedef unsigned char *byte_pointer;
typedef unsigned char byte;

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
