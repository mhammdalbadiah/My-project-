#include "ImageTransform.h"
#include <cmath>

PNG grayscale(PNG image) {
  for (unsigned x = 0; x < image.width(); x++) {
    for (unsigned y = 0; y < image.height(); y++) {
      HSLAPixel & pixel = image.getPixel(x, y);
      pixel.s = 0;
    }
  }
  return image;
}

PNG illinify(PNG image) {
  for (unsigned x = 0; x < image.width(); x++) {
    for (unsigned y = 0; y < image.height(); y++) {
      HSLAPixel & pixel = image.getPixel(x, y);
      double distToOrange = std::min(std::abs(pixel.h - 11), 360 - std::abs(pixel.h - 11));
      double distToBlue   = std::min(std::abs(pixel.h - 216), 360 - std::abs(pixel.h - 216));
      pixel.h = (distToOrange < distToBlue) ? 11 : 216;
    }
  }
  return image;
}

PNG spotlight(PNG image, int centerX, int centerY) {
  for (unsigned x = 0; x < image.width(); x++) {
    for (unsigned y = 0; y < image.height(); y++) {
      HSLAPixel & pixel = image.getPixel(x, y);
      double dx = (int)x - centerX;
      double dy = (int)y - centerY;
      double dist = sqrt(dx*dx + dy*dy);

      double factor = 1 - 0.005 * dist;
      if (factor < 0.2) factor = 0.2;

      pixel.l *= factor;
    }
  }
  return image;
}

PNG watermark(PNG firstImage, PNG secondImage) {
  unsigned width = std::min(firstImage.width(), secondImage.width());
  unsigned height = std::min(firstImage.height(), secondImage.height());

  for (unsigned x = 0; x < width; x++) {
    for (unsigned y = 0; y < height; y++) {
      HSLAPixel & basePixel = firstImage.getPixel(x, y);
      HSLAPixel & stencilPixel = secondImage.getPixel(x, y);

      if (stencilPixel.l == 1.0) {
        basePixel.l += 0.2;
        if (basePixel.l > 1.0) basePixel.l = 1.0;
      }
    }
  }
  return firstImage;
}
