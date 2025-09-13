#pragma once
#include "uiuc/PNG.h"
using namespace uiuc;

PNG grayscale(PNG image);
PNG illinify(PNG image);
PNG spotlight(PNG image, int centerX, int centerY);
PNG watermark(PNG firstImage, PNG secondImage);
