#pragma once
#include <string>
#include "bitmap_def.h"

class tinybmp
{
public:
	tinybmp();
	tinybmp(std::string file_name);
	virtual ~tinybmp();
public:
	void import_image(std::string file_name);
	void export_image(std::string file_name);

public:
	unsigned char** create_bitmap_24bit(int height, int width);

protected:
	BITMAP_HEADER m_bh;
	BITMAP_INFO_HEADER m_bih;
	unsigned char** m_image_buf;

};