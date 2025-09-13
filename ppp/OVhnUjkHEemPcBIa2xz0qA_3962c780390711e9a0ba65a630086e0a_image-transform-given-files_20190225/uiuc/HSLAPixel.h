#pragma once
namespace uiuc {
  class HSLAPixel {
  public:
    double h; // Hue: 0 - 360
    double s; // Saturation: 0.0 - 1.0
    double l; // Luminance: 0.0 - 1.0
    double a; // Alpha: 0.0 - 1.0

    // Constructors
    HSLAPixel(); // default
    HSLAPixel(double hue, double sat, double lum); // no alpha
    HSLAPixel(double hue, double sat, double lum, double alpha); // full
  };
}
