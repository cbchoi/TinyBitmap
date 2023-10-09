#include <iostream>
#include "tinybmp.h"

int main()
{
	tinybmp tb = tinybmp("image.bmp");
	tb.export_image("./image2.bmp");
	return 0;
}